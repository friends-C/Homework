#ifndef TO_BINARY_H
# define TO_BINARY_H

# include <string>
# include <iostream>
# include <math.h>

class To_Binary
{
	public:
		To_Binary(int number);
		std::string GetString() const;
		friend std::ostream& operator<<(std::ostream& ostr, const To_Binary& obj);

	private:
		void NumberToBinaryString(int number);
		
		std::string my_string;
};

To_Binary::To_Binary(int number)
{
	NumberToBinaryString(number);
}

void To_Binary::NumberToBinaryString(int number)
{
	for (size_t i = 0; i < sizeof(int) * 8 - 1; ++i)
	{
		my_string += ((number >> i) & 1) + '0';
	}
	reverse(my_string.begin(), my_string.end());
}

std::string To_Binary::GetString() const
{
	return my_string;
}

std::ostream& operator<<(std::ostream& ostr, const To_Binary& obj)
{
	ostr << obj.GetString();
	return ostr;
}

#endif