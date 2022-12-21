//
//  Characteristic.h
//  lab4-1
//
//  Created by Islam Tagirov on 21.12.2022.
//

#ifndef Characteristic_h
#define Characteristic_h
#include "Weapon.h"//;
using namespace std;
using std::string;

class Characteristic{
public:
    float power;
    
    Characteristic(float p) {
        power = p;
    }
    
    float GetDamage(Weapon* w) {
        float dmg = w->damage;
        return dmg + power; // вывод суммы силы и урон от переданного оружия.
    }
};

#endif /* Characteristic_h */
