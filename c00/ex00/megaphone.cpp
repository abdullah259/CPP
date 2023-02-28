#include <iostream>

int main(int arc, char **argv)
{
	if (arc == 1)
		std::cout << "Wrong arguments" << std::endl;
	else
	{
		int i;
		std::string to_up;

		i = 1;
		while (argv[i])
		{
			to_up = argv[i];
			for (size_t j = 0; j < to_up.length(); j++)
				std::cout << static_cast<char>(to_up[j]);
			i++;
		}
		std::cout << std::endl;
 	}
	return (0);
}