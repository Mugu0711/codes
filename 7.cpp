#include <iostream>

class Room {
private:
    double length;
    double breadth;
    double height;

public:
    Room(double len, double brd, double hgt) {
        length = len;
        breadth = brd;
        height = hgt;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    Room room1(10.0, 8.0, 4.0);
    Room room2(12.0, 6.0, 3.5);

    std::cout << "Room 1 Area: " << room1.calculateArea() << " square units" << std::endl;
    std::cout << "Room 1 Volume: " << room1.calculateVolume() << " cubic units" << std::endl;

    std::cout << "Room 2 Area: " << room2.calculateArea() << " square units" << std::endl;
    std::cout << "Room 2 Volume: " << room2.calculateVolume() << " cubic units" << std::endl;

    return 0;
}

