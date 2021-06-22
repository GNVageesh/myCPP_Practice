#include <iostream>
#include <vector>
#include <sstream>
#include <string>

void lex(std::string data) {
    std::vector<std::string> statements;
    std::vector<std::string> variable;
    std::vector<int> values;
    std::stringstream ss(data);
    std::string word;

    while (ss >> word) {
        statements.push_back(word);
        for (std::string val : statements) {
            std::cout << val << std::endl;
        }

        int n = statements.size();
        int val = std::atoi(statements.at(n-1).c_str());
        values.push_back(val);
        
        std::string var = statements[1];

        std::cout << "The value is: " << val << std::endl;
        std::cout << "The variable is: " << var << std::endl;
    }
}

int main() {
    std::string val;

    while (true){
        std::cout << ">>> ";
        std::getline(std::cin, val);

        lex(val);
    }
}