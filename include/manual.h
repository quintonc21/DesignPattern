#include <iostream>
#include <string>

#ifndef MANUAL
#define MANUAL

class Manual{
    public:
      std::string engine, seats, tripComputer, gps;
      std::string color;
      bool hasSunroof;
  
      void listFeatures() const;
      
  };

  #endif