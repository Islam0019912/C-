//
//  main.cpp
//  LAB6
//
//  Created by Islam Tagirov on 22.12.2022.
//

#include <iostream>
#include "User.h"//;

using namespace std;
using std::string;

int main(int argc, const char * argv[]) {
    try{
        int number;
        cout << "Введите число 1/2/3: ";
        cin >> number;
        if (number != 1 and number != 2 and number != 3) throw "Некорректное значение";
        //else cout << number << "\n";
        
        /* int year; РЕАЛИЗАЦИЯ ПУНКТОВ 3-7
        cout << "Введите год своего рождения: ";
        cin >> year;
        if (year < 1850) throw "Что-то не верится...";
        else if (year > 2022) throw "Вы ещё не родились";
        else if (year < 0) throw "Вы ввели отрицательное число!";
        else cout << "Спасибо! \n";
        */
        
        User user(2000);
        cout << "Result is = " << user.getYear() << "\n";
    }
    catch (const char* msg) {
        
        std::cout << msg << "\n";
    }
    
    
}
