#include "director.h"
#include "car.h"
#include "builder.h"
#include "manual.h"
#include "carbuilder.h"
#include "manualbuilder.h"

#ifndef CLIENTCODE
#define CLIENTCODE

void ClientCode1(Director &director);

void ClientCode2(Director &director);

void ClientCode3(Director &director);

std::pair<Car*, Manual*> ClientCode4(Director &director);


#endif