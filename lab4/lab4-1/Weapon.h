//
//  Weapon.h
//  lab4-1
//
//  Created by Islam Tagirov on 21.12.2022.
//

#ifndef Weapon_h
#define Weapon_h
using namespace std;
using std::string;

class Weapon{
public: //оставим поля класса оружия открытыми (задание 4_1)
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
    
    string Getname() {
        return name;
    }
    
    void Setdamage() {
        damage = 99.9;
    }
    
    friend void test(const Weapon& m);
    friend class Characteristics; //объявляем класс Characteristic дружественным для класса оружия
    
    ~Weapon(){
        //cout << "Вызван деструктор \n";
        cout << "Данные: " << name << " " << damage << " " << weight << "; уничтожены \n";
    }
};
#endif /* Weapon_h */
