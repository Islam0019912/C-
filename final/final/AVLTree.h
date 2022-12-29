//
//  AVLTree.h
//  final
//
//  Created by Islam Tagirov on 27.12.2022.
//

#ifndef AVLTree_h
#define AVLTree_h
#include <vector>
#include "Tree.h"//;

class AVLTree : public Tree {
public:
    // AVLTree() {}
    void add(int k) override;
    void del(int k) override {
        remove(tree, k);
    }
    void print();
    int search(int k) override {
        return find(tree, k, 0);
    }
    AVLTree(int k);
    AVLTree();
    
private:
    node* tree;
    std:: vector<int> data; // вектор, содержащий элементы авл-дерева
    int _size = 0;
    int st = 0;

    int find(node* tree, int k, int index);
        int bfactor(node* p);
        int height(node* p);

    void clear() { for (int i = 0; i < data.size(); i++) data[i] = 0; }
        void fixheight(node* p);
        void print_node(node* root, std:: vector<int> & nums, int index);
    
    node* insert(node* p, int k);
    node* balance(node* p); // балансировка узла
    
    node* findmin(node* p) { // поиск узла с минимальным ключом
        return p->left ? findmin(p->left) : p;
    }
    
    node* remove(node* p, int k); // удаление узла
    node* removemin(node* p); // удаление узла с минимальным ключом
    node* rotateleft(node* q); // левый поворот
    node* rotateright(node* p); // правый поворот
    
};
    

#endif /* AVLTree_h */
