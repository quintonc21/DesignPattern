#include "builder.h"

#ifndef DIRECTOR
#define DIRECTOR

class Director{
    public:
      void makeSUV(Builder *builder);
      void makeSportsCar(Builder *builder);
      void makeLuxuryCar(Builder *builder);
  };
  

#endif