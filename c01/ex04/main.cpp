// #include <iostream>
// #include <fstream>

// int main(int arc, char **argv)
// {
// 	if (arc != 4)
// 		std::cout << "Wrong arg number" << std::endl;
// 	else 
// 	{
// 		std::string first_arg = argv[1];
// 		std::string second_arg = argv[2];
// 		std::string last_arg = argv[3];

// 		if (!second_arg.size() || !last_arg.size())
// 		{
// 			std::cout << "Wrong s1 or s2" << std::endl;
// 			return (EXIT_FAILURE);
// 		}

// 		std::ifstream input_file;
// 		std::ofstream output_file((first_arg += ".replace").c_str());

// 		input_file.open(first_arg);
// 		if (!input_file) {
//         	std::cout << "Error opening input file!\n";
//         	return 0;
//     	}


// 		char c;
// 		while (input_file >> c)
// 		{
// 			output_file << c;
// 		}
// 	}
// }

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong arg number" << std::endl;
        return EXIT_FAILURE;
    }

    std::string first_arg = argv[1];
    std::string second_arg = argv[2];
    std::string last_arg = argv[3];

    if (second_arg.empty() || last_arg.empty())
    {
        std::cout << "Wrong s1 or s2" << std::endl;
        return EXIT_FAILURE;
    }

    std::ifstream input_file(first_arg);
    if (!input_file)
    {
        std::cout << "Error opening input file!\n";
        return EXIT_FAILURE;
    }

    std::ofstream output_file((first_arg + ".replace").c_str());
    if (!output_file)
    {
        std::cout << "Error opening output file!\n";
        return EXIT_FAILURE;
    }

    std::string line;
    while (std::getline(input_file, line))
    {
        std::string new_line;
        size_t pos = 0;
        while (pos < line.length())
        {
            size_t found_pos = line.find(second_arg, pos);
			// std::cout << "this is found pos " << found_pos << " and this is pos " << pos <<std::endl;
            if (found_pos == std::string::npos)
            {
                // no more occurrences of the substring, copy the rest of the line
                new_line += line.substr(pos);
                break;
            }
            else
            {
                // copy the characters before the occurrence of the substring
                std::cout << "this is new_line " << pos << "this is " << found_pos - pos << std::endl;
				new_line += line.substr(pos, found_pos - pos);
				std::cout << "this is new_line " << new_line << std::endl;
                // copy the new string in place of the substring
                new_line += last_arg;
				std::cout << "this is new_line " << new_line << std::endl;
                // update the position to continue searching after the substring
                pos = found_pos + second_arg.length();
            }
        }
        output_file << new_line << std::endl;
    }

    input_file.close();
    output_file.close();

    return EXIT_SUCCESS;
}

