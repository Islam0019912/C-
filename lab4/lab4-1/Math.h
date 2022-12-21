//
//  Math.h
//  lab4-1
//
//  Created by Islam Tagirov on 21.12.2022.
//

#ifndef Math_h
#define Math_h
class Math{
public:
    float x;
    float y;
    static int counter; //

    
    Math(float x1,float y1) {
        x = x1;
        y = y1;
    }
    
    static void Add(float m,float n){
        cout << "Add is " << m + n << "\n";
        return;
        counter++;
    }
    
    static void Sub(float m,float n){
        cout << "Sub is " << m - n << "\n";
        return;
        counter++;
    }
    
    static void Mult(float m,float n){
        cout << "Mult is " << m * n << "\n";
        return;
        counter++;
    }
    
    static void Div(float m,float n){
        cout << "Div is " << m / n << "\n";
        return;
        counter++;
    }
};

#endif /* Math_h */
