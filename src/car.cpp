#include "car.h"



void Car::listFeatures() const{
    std::cout << "Car Features:";
    std::cout << "\n  Engine: " << engine;
    std::cout << "\n  Seats: " << seats;
    std::cout << "\n  tripComputer: " << tripComputer;
    std::cout << "\n  GPS: " << gps << "\n";
    std::cout << "\n  Car Color: " << color << "\n";
    std::cout << "\n  Has Sunroof: " << hasSunroof << "\n";
};