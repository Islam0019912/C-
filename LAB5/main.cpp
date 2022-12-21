//
//  main.cpp
//  LAB5
//
//  Created by Islam Tagirov on 22.12.2022.
//

#include <iostream>
#include "Weapon.h"//;
#include "MagicWeapon.h"//;
using namespace std;
using std::string;



struct player {
    string id;
    string login;
    string password;
};

void print_struct(player& p){
    cout << "Id = " << p.id << "\n";
    cout << "Login = " << p.login << "\n";
    cout << "Password = " << p.password << "\n";

}

int main(int argc, const char * argv[]) {
    Weapon w;
    w.SetWeapon(Weapons::BOW);
    
    switch (w.GetWeapon()) {
        case Weapons::ONEHANDED:
            cout << "Одноручное оружие \n";
            w.SetDamage(100);
            break;
        case Weapons::TWOHANDED:
            cout << "Двуручное оружие \n";
            w.SetDamage(200);
            break;
        case Weapons::BOW:
            cout << "Лук \n";
            w.SetDamage(300);
            break;
        case Weapons::CROSSBOW:
            cout << "Арбалет \n";
            w.SetDamage(400);
            break;
    }
        
    player marcus;
    marcus.id = "1289389283";
    marcus.login = "marc-2022";
    marcus.password = "rashford_mu";
    print_struct(marcus);
    
    MagicWeapon w1; //констуктор присвоит значение extended_dmg = 23
    w1.SetWeapon(Weapons::BOW);
    cout << "Дополнительный урон w1 = " << w1.GetExtended() << "\n";
    cout << "Урон магического оружия = " << w1.sum(&w) << "\n";
    
    
    
}
