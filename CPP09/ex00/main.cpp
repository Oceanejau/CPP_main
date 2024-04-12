
#include <iostream>
#include <fstream>
#include <string>

# define ERROR_LINE 81
# define FILE_1 "res_input_errors.txt"
# define FILE_2 "res_input_ok.txt"
# define FILE_3 "res_input_chmod.txt"
# define FILE_4 "res_input_main.txt"


/*
_GREY=	$'\033[1;30m
_RED=	$'\033[1;31m
_GREEN=	$'\033[1;32m
_YELLOW=$'\033[1;33m
_BLUE=	$'\033[1;34m
_PURPLE=$'\033[1;35m
_CYAN=	$'\033[1;36m
_WHITE=	$'\033[1;37m
_GREEN= $'\033[1;32m
_NORMAL= $'\e[0m
*/
int main(void)
{
    std::string line;

    std::ifstream file_1(FILE_1);
    if (file_1.is_open())
    {
        std::cout << "\033[1;38;5;226m\033[5m     --< Checking " << FILE_1 << " >-- \e[0m" << std::endl;
        while (std::getline(file_1, line))
        {
            if (line.find("\033[2J") != std::string::npos)
            {
                line =  line.substr(line.find("\033[2J") + 7);
            }
            if (line.find(" -- ") != std::string::npos)
            {
                line = line.substr(line.find(" -- ") + 4);
                std::cout << "\033[1;33m\033[5m     -- " << line << "\e[0m" << std::endl;
            }
            else if (line.find("Error") != std::string::npos)
                std::cout << "\033[1;32m You passed the test: \e[0m" << line << std::endl;
            else
                    std::cout << "\033[1;31m You failed the test: \e[0m" << line << std::endl;
        }
        file_1.close();
    }
    else
    {
        std::cerr << "Failed to open " << FILE_1 << std::endl;
        return (1);
    }
    std::ifstream file_2(FILE_2);
    if (file_2.is_open())
    {
        std::cout << "\033[1;38;5;226m\033[5m     --< Checking " << FILE_2 << " >-- \e[0m" << std::endl;
        while (std::getline(file_2, line))
        {
            if (line.find("\033[2J") != std::string::npos)
            {
                line =  line.substr(line.find("\033[2J") + 7);
            }
            if (line.find(" -- ") != std::string::npos)
            {
                line = line.substr(line.find(" -- ") + 4);
                std::cout << "\033[1;33m\033[5m     -- " << line << "\e[0m" << std::endl;
            }
            else if (line.find("Error") != std::string::npos)
                std::cout << "\033[1;31m You failed the test: \e[0m" << line << std::endl;
            else
                std::cout << "\033[1;32m You passed the test: \e[0m" << line << std::endl;
        }
        file_2.close();
    }
    else
    {
        std::cerr << "Failed to open " << FILE_2 << std::endl;
        return (1);
    }
    std::ifstream file_3(FILE_3);
    if (file_3.is_open())
    {
        std::cout << "\033[1;38;5;226m\033[5m     --< Checking " << FILE_3 << " >-- \e[0m" << std::endl;
        while (std::getline(file_3, line))
        {
            if (line.find("\033[2J") != std::string::npos)
            {
                line =  line.substr(line.find("\033[2J") + 7);
            }
            if (line.find(" -- ") != std::string::npos)
            {
                line = line.substr(line.find(" -- ") + 4);
                std::cout << "\033[1;33m\033[5m     -- " << line << "\e[0m" << std::endl;
            }
            else if (line.find("Error") != std::string::npos)
                std::cout << "\033[1;32m You passed the test: \e[0m" << line << std::endl;
            else
                std::cout << "\033[1;31m You failed the test: \e[0m" << line << std::endl;
        }
        file_3.close();
    }
    else
    {
        std::cerr << "Failed to open " << FILE_3 << std::endl;
        return (1);
    }
    std::ifstream file_4(FILE_4);
    if (file_4.is_open())
    {
        std::cout << "\033[1;38;5;226m\033[5m     --< Checking " << FILE_4 << " >-- \e[0m" << std::endl;
        while (std::getline(file_4, line))
        {
            if (line.find("\033[2J") != std::string::npos)
            {
                line =  line.substr(line.find("\033[2J") + 7);
            }
            if (line.find(" -- ") != std::string::npos)
            {
                line = line.substr(line.find(" -- ") + 4);
                std::cout << "\033[1;33m\033[5m     -- " << line << "\e[0m" << std::endl;
            }
            else if (line.find("Error") != std::string::npos)
                std::cout << "\033[1;31m You failed the test: \e[0m" << line << std::endl;
            else
                std::cout << "\033[1;32m You passed the test: \e[0m" << line << std::endl;
        }
        file_4.close();
    }
    else
    {
        std::cerr << "Failed to open " << FILE_4 << std::endl;
        return (1);
    }
    return (0);
}
