#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string input;
    std::getline(std::cin, input);

    std::stringstream ss(input);

    std::string value;

    while (ss >> value)
    {
        std::cout << value << std::endl;
    }
}