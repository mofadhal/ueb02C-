#ifndef CITY_H
#define CITY_H
/**
 *@author  Mofadhal Al-Manari and Mohamad Ata Suleiman and Clarita Kawam (Gruppe 22)
 *@version  02.07.2024
 **/
#include <string>
#include "Storehouse.h"

class City {

private:
    std::string name;
    double distanceToHome;
    Storehouse* warehouse;

public:
    City(const std::string& name, double distance, Storehouse* warehouse);


string getName() const ;
double getDistanceToHome() const ;
Storehouse* getWarehouse() const ;
string toString() const;
~City();
};



#endif //CITY_H
