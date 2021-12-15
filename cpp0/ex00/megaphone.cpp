#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
	std::string input;
	std::string output;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	for (size_t i = 1; i < argc; i++)
	{
		input = argv[i];
		output = input;
		for (size_t j = 0; j < input.length(); j++)
		{
			char c = output[j];
			if (c > 96 && c < 123)
				output[j] -= 32;
		}
		std::cout << output;
	}	
	std::cout << std::endl;
	return (0);
}
