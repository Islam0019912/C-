//
//  main.cpp
//  LAB5
//
//  Created by Islam Tagirov on 22.12.2022.
//

#include <iostream>
#include "Weapon.h"//;
#include "MagicWeapon.h"//;
#include "Onehanded.h"//;
#include "Temp.h"//;

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

int Onehanded::counter = 0;

int main(int argc, const char * argv[]) {
    //Weapon w; // комплиятор выдаст ошибку, тк мы создаем экземпляр абстрактного класса Weapon
    MagicWeapon m;
    m.Attack();
    Onehanded foo;
    foo.Attack();
    foo.Attack();
    
    Handed<string> ex("AK-51", "Glock-19");
    cout << "В левой руке - " << ex.GetLeft() << " ,в правой - " << ex.GetRight() << "\n";
    
}
