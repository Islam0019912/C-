//
//  Onehanded.h
//  LAB5
//
//  Created by Islam Tagirov on 22.12.2022.
//

#ifndef Onehanded_h
#define Onehanded_h
#include "Weapon.h"//;

class Onehanded : public Weapon {
public:
    static int counter;
    

    
    void Attack() override {
        if (counter > 0){
            cout << "Оружие уже было использовано \n";
        } else{
            cout << "Атакуем одноразовым оружием \n";
            counter++;
        }
    }
};

#endif /* Onehanded_h */
