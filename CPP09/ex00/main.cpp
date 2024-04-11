
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
    int count = 0;
    std::ifstream file(FILE_1);

    size_t pos;
    std::string line;


    if (file.is_open())
    {
        while (std::getline(file, line))
        {
            if (count < ERROR_LINE)
            {
                pos = line.find("Error");
                if (pos != std::string::npos)
                    std::cout << "\033[1;32m You passed the test: \e[0m";
                else
                    std::cout << "\033[1;31m You failed the test: \e[0m";
            }
            std::cout << line << std::endl;
            count++;
        }
        file.close();
    }
    else
    {
        std::cerr << "Failed to open " << FILE_1 << std::endl;
        return (1);
    }
    if (count < ERROR_LINE)
    {
        pos = line.find("Error");
        if (pos != std::string::npos)
        {
            std::cout << "\033[1;31m You failed the test: \e[0m";
        }
        else
            std::cout << "\033[1;32m You passed the test: \e[0m";

    }
    return (0);
}
