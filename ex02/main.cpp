#include "Array.hpp"
#include "Array.tpp"

int main()
{
	Array<int> a;
	Array<int> b(10);
	Array<int> c(3);
	Array<int> d(3);
	Array<int> e;

	std::cout << "Testing the size function" << std::endl;
	std::cout << a.size() << std::endl;
	std::cout << b.size() << std::endl;

	// ******************* //
	std::cout << std::endl;
	std::cout << "Testing initial values in the array" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "Index [ " << i << " ]: ";
		std::cout << b[i] << std::endl;
	}
	
	// ******************* //

	std::cout << std::endl;
	std::cout << "Testing assigned values in the array" << std::endl;
	for (size_t i = 0; i < 10; i++)
		b[i] = i;

	std::cout << "Values assigned" << std::endl;


	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "Index [ " << i << " ]: ";
		std::cout << b[i] << std::endl;
	}

	// ******************* //

	std::cout << std::endl;
	std::cout << "Testing the copy constructor" << std::endl;
	c[0] = 'T';
	c[1] = 'O';
	c[2] = 'P';
	d[0] = '*';
	d[1] = '*';
	d[2] = '*';

	d = c;

	std::cout << (char)d[0];
	std::cout << (char)d[1]; 
	std::cout << (char)d[2] << std::endl;

	// ******************* //
	
	std::cout << std::endl;
	std::cout << "Testing the outbound" << std::endl;
	try
	{
		std::cout << e[10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}