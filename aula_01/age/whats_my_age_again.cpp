#include <iostream>	// std:cout
#include <string> //it's good to include every library which contains elements
//you're using your code

int main()
{

	int year = 2019;
	unsigned age = 20;
	std::string name = "Lviz";
	std::cout << "Hello, " << name
				<< ", I see you were born in "
				<< year - age << "!\n";

}
