//
//  main.cpp
//  lab3
//
//  Created by Islam Tagirov on 20.12.2022.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int *pointer;
    int x = 4;
    pointer = &x;
    cout << "Адрес указателя: " << pointer << ", значение = " << *pointer << "\n";
    x = 3;
    cout << *pointer << "\n";
    int b[] = {22,33,66};
    int *p = b;
    for (int i = 0; i < sizeof(b)/sizeof(b[0]);i++){
        cout << p[i] << " ";
    }
    cout << "\n";
    //int c = 5;
    //int* const pc = &c;
    // pc = &c; - ошибка изменения адреса указателя
}
