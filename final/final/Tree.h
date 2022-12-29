//
//  Tree.h
//  final
//
//  Created by Islam Tagirov on 27.12.2022.
//

#ifndef Tree_h
#define Tree_h
#include "node.h"//;

// Методы для работы с деревьями: поиск, вставка и удаление узла по ключу, реализуются в абстрактном классе Tree.


class Tree {
public:
    
    virtual void add(int k) = 0; // функция вставки по ключу k
    virtual void del(int k) = 0; // функция удаления по ключу k
    virtual int search(int k) = 0; // функция поиска узла по ключу k
};

#endif /* Tree_h */
