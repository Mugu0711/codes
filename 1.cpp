#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculatePerimeter() {
        return 2 * M_PI * radius;
    }

    double calculateArea() {
        return M_PI * radius * radius;
    }
};

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    Circle circle(radius);

    std::cout << "Perimeter of the circle: " << circle.calculatePerimeter() << std::endl;
    std::cout << "Area of the circle: " << circle.calculateArea() << std::endl;

    return 0;
}

