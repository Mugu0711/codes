#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int roll_no;
};

int main() {
    Student studentObject;
    studentObject.name = "John";
    studentObject.roll_no = 2;

    std::cout << "Student Name: " << studentObject.name << std::endl;
    std::cout << "Roll Number: " << studentObject.roll_no << std::endl;

    return 0;
}

