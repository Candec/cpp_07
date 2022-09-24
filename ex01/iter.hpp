#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <class T, class U>
void iter(T *array, size_t n, U f)
{
	for (size_t i = 0; i < n; i++)
	{
		f(array[i]);
	}
}

template <class T>
void printer(const T& p)
{
	std::cout << p << std::endl;
}

#endif