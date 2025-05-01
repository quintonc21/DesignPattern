#include <iostream>
#include <string>

#ifndef CAR_H
#define CAR_H

class Car{
  public:
    std::string engine, seats, tripComputer, gps;
    std::string color;
    bool hasSunroof;

    void listFeatures() const;
};

#endif 