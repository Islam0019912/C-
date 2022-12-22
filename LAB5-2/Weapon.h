//
//  Weapon.h
//  LAB5
//
//  Created by Islam Tagirov on 22.12.2022.
//

#ifndef Weapon_h
#define Weapon_h
using namespace std;

enum Weapons {
    ONEHANDED,
    TWOHANDED,
    BOW,
    CROSSBOW
};



class Weapon {
public:
    float damage;
    Weapons GetWeapon() {
        return x;
    }
    
    void SetWeapon(Weapons y) {
        this->x = y;
    }
    
    void SetDamage(float dmg) {
        damage = dmg;
    }
    
    virtual void Attack() = 0;
    
private:
    Weapons x;
};

#endif /* Weapon_h */
