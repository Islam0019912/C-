//
//  main.cpp
//  lab3-2
//
//  Created by Islam Tagirov on 20.12.2022.
//

#include <iostream>
using namespace std;

void func(int *list,int length){
    int* last;
    int lst = list[length];
    last = &lst;
    cout << *list << " ";
    int i = 1;
    while (list[i] != lst){
        cout << list[i] << " ";
        i ++;
    }
    cout << "\n \n";
}

float add(float x, float y) {
    return x + y;
}

float sub(float x,float y) {
    return x - y;
}

void (*pointer(float x,float y, char input))() {
    if (input == *"+") cout << add(x,y) << "\n";
    else cout << sub(x,y) << "\n";
    return 0;
}

int main(int argc, const char * argv[]) {
    int list[] = {2,12,2022};
    int length = sizeof(list)/sizeof(list[0]);
    func(list,length);
    
    float (*operation)(float, float);
    operation = add;
    std::cout << operation(2, 10) << "\n";
    operation = sub;
    std::cout << operation(2, 10) << "\n \n";

    void (*test)() = pointer(2,3,42);// char(42) = "-" и char(43) = "+"
    
    int* dm = new int(10);
    cout << dm << " = " << *dm << "\n";
    delete dm;
        
    

}
