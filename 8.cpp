#include <iostream>
#include <string>
#include <locale> // for std::toupper and std::tolower

class Student {
public:
    std::string name;
    int roll_no;

    void print_Str() {
        std::cout << "Name in Uppercase: ";
        for (char c :name) {
            std::cout << static_cast<char>(std::toupper(c));
        }
        std::cout << std::endl;

        std::cout << "Name in Lowercase: ";
        for (char c : name) {
            std::cout << static_cast<char>(std::tolower(c));
        }
        std::cout << std::endl;
    }
};

int main() {
    Student studentObject;
    studentObject.name = "Mugu";


    studentObject.print_Str();

    return 0;
}

