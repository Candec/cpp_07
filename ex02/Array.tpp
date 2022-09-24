#include "Array.hpp"	

//constructors
template <class T>
Array<T>::Array() : array(0), length(0)
{

}

template <class T>
Array<T>::Array(unsigned int n) : array(new T[n]), length(n)
{
	std::memset(array, 0, sizeof(T) * n);
}

template <class T>
Array<T>::Array(const Array<T> &src) : array(0), length(0)
{
	*this = src;
}

//destructor
template <class T>
Array<T>::~Array()
{
	delete[] array;
}

//operators
template <class T>
Array<T>& Array<T>::operator=(const Array<T> &src)
{
	if (this != &src)
	{
		delete[] array;
		array = 0;
		length = src.length;
		if (length)
		{
			array = new T[length];
			for (unsigned int i = 0; i < length; i++)
			{
				array[i] = src.array[i];
			}
		}
	}
	return (*this);
}

template <class T>
T& Array<T>::operator[](std::size_t index)
{
	if (index < length)
		return (array[index]);
	else
	{
		std::stringstream error;
		error << "[ERROR]: The index is out of bounds" << std::endl;
		throw std::out_of_range(std::string(error.str()));
	}
}


//function
template <class T>
unsigned int Array<T>::size() const
{
	return (length);
}