#include <iostream>

#include "src/GameMotor/GameMotor.h"
#include "src/Vehicule/Vehicule.h"
#include "src/Position/Position.h"

int main() {
    int size_x;
    int size_y;

    std::cout << "How many column do you want: ";
    std::cin >> size_x;
    std::cout << "\n";
    std::cout << "How many line do you want: ";
    std::cin >> size_y;
    std::cout << "\n";

    GameMotor game(size_x, size_y);

    Vehicule vehicule("Ma superbe voiture");
    Vehicule vehicule2("Ma superbe voiture", 3, 2);
    Vehicule vehicule3("Ma superbe voiture", Position(3, 2));

    std::cout << vehicule.toString() << std::endl;
    std::cout << vehicule2.toString() << std::endl;
    std::cout << vehicule3.toString() << std::endl;

    vehicule.setX(5);
    vehicule2.setPosition(10, 5);
    vehicule3.setPosition(Position(10,20));

    std::cout << vehicule.toString() << std::endl;
    std::cout << vehicule2.toString() << std::endl;
    std::cout << vehicule3.toString() << std::endl;

    return 0;
}