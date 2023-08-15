#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;
    double price;

public:
    Car(const std::string& b, const std::string& m, int y, double p) {
        brand = b;
        model = m;
        year = y;
        price = p;
    }

    void printAttributes() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Price: $" << price << std::endl;
    }
};

int main() {
    Car car1("Jaguar", "I-Pace", 2022, 250000.0);
    
    std::cout << "Car 1 Attributes:" << std::endl;
    car1.printAttributes();

    return 0;
}

