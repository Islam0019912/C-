//
//  MagicWeapon.h
//  LAB5
//
//  Created by Islam Tagirov on 22.12.2022.
//

#ifndef MagicWeapon_h
#define MagicWeapon_h
#include "Weapon.h"//;

class MagicWeapon : public Weapon{
    
public:
    MagicWeapon(float ext){
        extended_dmg = ext;
    }
    MagicWeapon(){
        extended_dmg = 23;
    }
    
    virtual float GetExtended(){
        return extended_dmg;
    }
    
    float sum(Weapon* w){
        return w->damage + extended_dmg;
    }
    
private:
    float extended_dmg;
    
};
#endif /* MagicWeapon_h */
