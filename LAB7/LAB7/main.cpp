//
//  main.cpp
//  LAB7
//
//  Created by Islam Tagirov on 22.12.2022.
//


#include <string>
#include <iostream>
using namespace std;
using std::string;

#include <regex> // Для работы с регулярными выражениями подключим библиотеку regex
#include <math.h> // Класс math
#include <cmath>
#include <fstream> // для работы с файлами
#include <vector> // для работы с векторами
#include "Settings.h"//; // класс настроек с map


void print(std::vector<float> v){
    
    for (int n : v) std::cout << n << " ";
    std::cout << "\n-------------\n";
    
}

int main(int argc, const char * argv[]) {
    // ЗАДАНИЕ 7_1
    string input;
    cout << "Введите строку: ";
    cin >> input;
    cout << "\n" << input.substr(1,3) << "\n";
    
    if (input.find("a") != -1){
        cout << input.find("a") << "\n";
    } else{
        cout << "Символа a не найдено \n";
    }
    
    
    
    
    // ЗАДАНИЕ 7_2
    string name;
    cout << "Enter your name, please: ";
    cin >> name;
    regex reg("^([A-Z])([a-z]*)$");
    bool found = regex_match(name, reg);
    
    if (found){
        cout << "Correct, thanks " << name << "! \n \n";
    } else {
        cout << "Wrong input! \n \n";
    }
    
    regex re("^[a-z0-9_][a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}$");
    
    char buff[] = "На ящике hymn@hotmail.com обнаружены письма от dfdf@mail.ru и oili008@inbox.ru";
        char *tmp_char;
        tmp_char = strtok(buff," ");    // вызовем функцию strtok для разделения строки в buff по пробелам
        while (tmp_char != NULL) {    ///выводим части пока они существуют
            if (regex_search(tmp_char,re)) cout << tmp_char << "\n";   ///выведем часть на экран
            tmp_char = strtok(NULL, " ");    ///получим следующую часть
        }
    
    float r;
    cout << "Введите радиус окружности: ";
    cin >> r;
    cout << "Длина окружности = " << trunc(2 * 3.14 * r * 1000 + 0.5) / 1000 << "\n";
    
    
    
    
    // ЗАДАНИЕ 7_3
    string str;
    fstream file;
    cout << "Введите строку: ";
    cin >> str;
    string f = "/Users/mila/Desktop/STUDY/Поликек/C++/LAB7/a.txt";
    string data = " ";

    while (true){
        if(str == "read"){ //чтение содержимого
            file.open(f, ios::in);
            cout << "\n Содержимое файла: \n";
            string data = " ";
            string line;
            while (getline(file, line)) {
                    data += line + "\n";
            }
            file.close();
            cout << data << "\n";
        }
        else if(str == "erase"){ // очитска файла
            file.open(f, std::ios::out);
            file << " ";
            file.close();
        }
        else if(str == "exit"){ // выход из бесконечного цикла
            break;
        }
        else{ // запись очередной строки в файл
            file.open(f, ios::in);
            string data = " ";
            string line;
            while (getline(file, line)) {
                    data += line + "\n";
            }
            file.close();
            file.open(f, ios::out);
            file << data;
            file << str; // записываем в поток информацию
            file << "\n";
            file.close();
        }
        
        cout << "Введите строку: ";
        cin >> str;
    }
    
    

    
    // ЗАДАНИЕ 7_4
    
    vector <float> v1{1,2,3,4,5};
    print(v1);
    auto i = v1.begin();
    i++;
    i++;
    i++;
    v1.insert(i, -2);
    print(v1);
    v1.pop_back();
    print(v1);
    
    
    Settings user;
    user.Add("Mbappe",17);
    user.Add("Messi",29);
    user.Add("Neyamr",10);
    user.Add("Ronaldo",7);

    user.print_map();
    
    cout << user.Get("Mbappe") << "\n";
    cout << user.Get("Ronaldo") << "\n";
    
    /* статические методы не относятся к динамике объекта, не используют и не меняют его состояния. */
    




}
