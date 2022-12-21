//
//  main.cpp
//  lab4-1
//
//  Created by Islam Tagirov on 21.12.2022.
//

#include <iostream>
#include "Weapon.h"//;
#include "Characteristic.h"//;
#include "Math.h"//;

using namespace std;
using std::string;

int main(int argc, const char * argv[]) {
    Weapon w ("AK-47",93.9,8);
    cout <<w.name << " " << w.damage << " " << w.weight << "\n";
    Weapon *w1 = new Weapon();
    cout <<w1->name << " " << w1->damage << " " << w1->weight << "\n";
    delete w1;
    cout << "\n";
    
    cout << w.max(); //проверка оружия на допустимый вес
    w.applyWeight(3.5);
    cout << w.max() << "\n"; //вес стал 8+3.5 > 10(допустимый вес)
    w.Getname();
    w.Setdamage();
    cout << w.damage << "\n"; //проверка установки наносимого урона Set
    
    
    Characteristic c (25.5); //создаем объект нового класса, сила = 25.5
    cout << c.GetDamage(&w) << "\n"; //проверка метода Get
    cout << "\n";
    
    
    Math res (12, 4);
    cout << "For numbers: (" << res.x << ", " << res.y << ") calculations are \n";
    res.Add(res.x,res.y);
    res.Sub(res.x,res.y);
    res.Mult(res.x,res.y);
    res.Div(res.x,res.y);
    
    cout << "\n";

    
}
