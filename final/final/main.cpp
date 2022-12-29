//
//  main.cpp
//  final
//
//  Created by Islam Tagirov on 27.12.2022.
//

#include <iostream>
#include "TreeMain.h"

using namespace std;
using std::string;

void cmds() {
    cout << "Команды для работы с деревом:               \n";
    cout << "Добавить элемент в последовательность   [add] \n";
    cout << "Вывод дерева                            [print] \n";
    cout << "Удалить элемент                         [remove] \n";
    cout << "Поиск элемента                          [find] \n";
    cout << "Выход из программы                      [exit] \n";
    cout << "Список команд                           [cmd] \n";
}

int main(int argc, const char * argv[]) {
    AVLTree* tree = new AVLTree(); // создаем новое дерево
    std::cout << "Введите количество членов последовательности: \n";
    int n; cin >> n;
    std::cout << "Введите элементы дерева:\n";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        tree->add(x);
    }
    
    
    cmds();
    string input = "cmd";
    while (input != "exit"){
        cout << "Ввод команды: ";
        cin >> input;
        if (input == "add"){ // добавление нового элемента
            cout << "Введите значение элемента [целое число]:  ";
            int x;
            cin >> x;
            tree->add(x);
        }
        else if (input == "print"){ // вывод текущего дерева
            cout << "Дерево выглядит так:  ";
            tree->print();
            cout << "\n";
        }
        else if (input == "remove"){ // удаление узла по ключу
            cout << "Введите значение элемента [целое число]:  ";
            int x;
            cin >> x;
            tree->del(x);
        }
        else if (input == "find"){ // поиск элемента
            cout << "Введите значение элемента [целое число]:  ";
            int x;
            cin >> x;
            tree->search(x);
        }
        else if (input == "cmd"){ // вывод команд, справка
            cmds();
        }
        
        else if (input != "exit") {
            cout << "Невверная команда! \nПовторный ввод: ";
            cin >> input;
        }
        
    }
    
}
