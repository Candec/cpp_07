#include "iter.hpp"

// Correction Sheet

class Awesome {
	public:

	Awesome( void ): _n(42)
	{
		return;
	}
	
	int	get( void ) const
	{
		return (this->_n);
	}

	private:

	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return (o);
}

template <typename T>
void	print( const T& x )
{
	std::cout << x << std::endl;
	return;
}

// /**************************/


int main()
{
	int numbers[] = { 0, 21, 42, 84, 168};
	float numbersf[] = { 3.1416f, 1.618f,  1.414f};
	char name[] = {"John"};

	::iter(numbers, 5, ::printer<int>);
	::iter(numbersf, 3, ::printer<float>);
	::iter(name, 5, ::printer<char>);

// Correction sheet

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print<int> );
	iter( tab2, 5, print<Awesome> );

	return (0);
}