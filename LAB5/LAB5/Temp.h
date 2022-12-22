//
//  Temp.h
//  LAB5
//
//  Created by Islam Tagirov on 22.12.2022.
//

#ifndef Temp_h
#define Temp_h

template <typename T>
class Handed {
public:
    Handed(T value1, T value2){
        this->left_hand = value1;
        this->right_hand = value2;
    }
    
    T GetLeft(){
        return left_hand;
    }
    
    void SetLeft(T left){
        this->left_hand = left;
    }
    
    T GetRight(){
        return right_hand;
    }
    
    void SetRight(T right){
        this->right_hand = right;
    }
    
private:
    T left_hand;
    T right_hand;
};

#endif /* Temp_h */
