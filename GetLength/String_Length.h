#ifndef STRING_LENGTH_H
# define STRING_LENGTH_H

# include <iostream>
# include <string>

class String_Length
{
	public:
		String_Length(const std::string& str) : my_str(str) {}
		int GetLength() const;
		friend std::ostream& operator<<(std::ostream& ostr, const String_Length& obj);

	private:
		std::string my_str;
};

int String_Length::GetLength() const
{
	int index = -1;

	while (my_str[++index])
		;
	return index;
}

std::ostream& operator<<(std::ostream& ostr, const String_Length& obj)
{
	ostr << obj.GetLength();
	return ostr;
}

#endif