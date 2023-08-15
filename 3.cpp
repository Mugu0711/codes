#include <iostream>
#include <string>

class StringHandler {
private:
    std::string storedString;

public:
    void get_Str(const std::string& input) {
        storedString = input;
    }

    void print_Str() {
        std::cout << "Stored String: " << storedString << std::endl;
    }
};

int main() {
    StringHandler strHandler;
    
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    strHandler.get_Str(input);
    strHandler.print_Str();
    
    return 0;
}

