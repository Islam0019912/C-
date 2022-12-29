//
//  node.h
//  final
//
//  Created by Islam Tagirov on 27.12.2022.
//

#ifndef node_h
#define node_h

struct node // структура для представления узлов дерева
{
    int key;
    unsigned char height;
    node* left;
    node* right;
    node(int k) { key = k; left = right = 0; height = 1; }
};

#endif /* node_h */
