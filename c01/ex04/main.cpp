#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

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

    std::ifstream input_file(first_arg.c_str());
    if (!input_file)
    {
        std::cout << "Error opening input file!\n";
        return EXIT_FAILURE;
    }

    std::ofstream output_file((first_arg + ".replace").c_str());
    if (!output_file)
    {
        std::cout << "Error opening output file!\n";
        input_file.close();
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
            if (found_pos == std::string::npos)
            {
                // no more occurrences of the substring, copy the rest of the line
                new_line += line.substr(pos);
                break;
            }
            else
            {
                // copy the characters before the occurrence of the substring
				new_line += line.substr(pos, found_pos - pos);
                // copy the new string in place of the substring
                new_line += last_arg;
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

