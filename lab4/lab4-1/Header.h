//
//  Weapon.h
//  lab4-1
//
//  Created by Islam Tagirov on 21.12.2022.
//

#ifndef Weapon_h
#define Weapon_h
using namespace std;

class Weapon{
public:
    string name;
    float damage;
    float weight;

    Weapon(string n,float d, float w) { // конструткор с 3 параметрами
        name = n;
        damage = d;
        weight = w;
    }
    
    Weapon(){ //конструктор без параметров
        name = "M41";
        damage = 90;
        weight = 3;
    }
    
    string max() {
        if (10 > weight) return "true \n";
        else return "false \n";
    }
    
    void applyWeight1(float x) {
        weight += x;
    }
    
    void applyWeight(float y) {
        applyWeight1(y);
    }
    
    ~Weapon(){
        cout << "Вызван деструктор \n";
        cout << "Данные: " << name << " " << damage << " " << weight << " уничтожены \n";
    }
};

#endif /* Weapon_h */
