#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string input;
    std::cout << "Enter the number: ";
    std::getline(std::cin, input);
    
    std::stringstream ss(input);
    int num = 0;
    int sum=0;

    while (ss >> num) {
        sum +=num;
    }

    std::cout << "The sum is: " << sum << std::endl;
}