#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <sstream>
# include <iostream>
# include <cstring>

template <class T>
class Array
{
	public:

	//constructors
	Array<T>();
	explicit Array<T>(unsigned int n);
	Array<T>(const Array<T> &src);

	//destructor
	virtual ~Array<T>();

	//operators
	Array<T>& operator=(const Array<T> &src);
	T& operator[](std::size_t index);

	//function
	unsigned int size() const;

	private:

	//Actual array & array's size
	T* array;
	unsigned int length;
};

#endif