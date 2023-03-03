# ifndef ACCUMULATE_HPP
# define ACCUMULATE_HPP


// This one which works with raw pointer doesn't work for std::string.
// ANSWER: Because std::string not a primitive type it is an object.
// SUGGESTION: You can implement functions listed below with "for" loop.

// template <typename T>
// T accumulate(T* beginPos, T* endPos, T init)
// {
// 	int index = 0;
// 	while (index + begin_pos != end_pos)
// 	{
// 		init += *(begin_pos + index);
// 		++index;
// 	}
// 	return init;
// }


template <class It, class T>
T accumulate(It begin, It end, T init)
{
	while (begin != end)
	{
		init += *begin;
		++begin;
	}
	return init;
}

// template <class It, class T>
// T accumulate(It begin, It end, T init1, T (*foo)(T init2, T next))
// {
// 	while (begin != end)
// 	{
// 		init1 = foo(init1, *begin);
// 		++begin;
// 	}
// 	return init1;
// }

template <class It, class T, class BinOp>
T accumulate(It begin, It end, T init, BinOp op)
{
	while (begin != end)
	{
		init = op(init, *begin);
		++begin;
	}
	return init;
}


#endif