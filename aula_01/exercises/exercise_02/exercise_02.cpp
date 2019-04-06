#include <iostream>

int main()
{
	for (int i = 1; i <= 100; ++i)
	{
		if (not (i % 3))
		{
			
			if (not (i % 5))
			{
				std::cout << "fizzbuzz" <<std::endl;
			}

			else
			{
				std::cout << "fizz" << std::endl;
			}

		}

		else if (not (i % 5))
		{
			std::cout << "buzz" << std::endl;
		}

		else
		{

			std::cout << i << std::endl;
		}

	}

}


