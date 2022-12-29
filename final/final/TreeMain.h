//
//  TreeMain.h
//  final
//
//  Created by Islam Tagirov on 27.12.2022.
//

#ifndef TreeMain_h
#define TreeMain_h
#include "Tree.h"
#include "AVLTree.h"
#include <cmath>
using namespace std;

int AVLTree:: height(node* p) {
    return p ? p->height : 0;
}

int AVLTree:: bfactor(node* p) {
    return height(p->right) - height(p->left);
}


void AVLTree:: fixheight(node* p) {
    int hl = height(p->left);
    int hr = height(p->right);
    p->height = (hl>hr?hl:hr)+1;
}

node* AVLTree:: rotateleft(node* q) {
    node* p = q->right;
    q->right = p->left;
    p->left = q;
    fixheight(q);
    fixheight(p);
    return p;
}

node* AVLTree:: rotateright(node* p) {
    node* q = p->left;
    p->left = q->right;
    q->right = p;
    fixheight(p);
    fixheight(q);
    return q;
}

node* AVLTree:: balance(node* p) {
    fixheight(p);
    if(bfactor(p) == 2) {
        if(bfactor(p->right) < 0)
            p->right = rotateright(p->right);
        return rotateleft(p);
    }
    if(bfactor(p) == -2) {
        if(bfactor(p->left) > 0)
            p->left = rotateleft(p->left);
        return rotateright(p);
    }
    return p;
}

node* AVLTree:: insert(node* p, int k) {
    if( !p ) return new node(k);
    if( k<p->key ) p->left = insert(p->left,k);
    else p->right = insert(p->right,k);
    return balance(p);
}

void AVLTree:: add(int k) {
    _size++;
    tree = insert(tree, k);
    if (_size > data.size()) {
        data.resize(data.size() + pow(2, st));
        st++;
    }
}

node* AVLTree:: removemin(node* p) {
    if(p->left == 0) return p->right;
    p->left = removemin(p->left);
    return balance(p);
}

node* AVLTree:: remove(node* p, int k) {
    if( !p ) return 0;
    if( k < p->key ) p->left = remove(p->left,k);
    else if( k > p->key ) p->right = remove(p->right,k);
    else //  k == p->key
    {
        node* q = p->left;
        node* r = p->right;
        delete p;
        if( !r ) return q;
        node* min = findmin(r);
        min->right = removemin(r);
        min->left = q;
        return balance(min);
    }
    clear();
    return balance(p);
}

int AVLTree:: find(node* tree, int k, int index = 0) {
    if (tree == nullptr) return -1;
    if (tree->key < k) return find(tree->right, k, index * 2 + 2);
    if (tree->key > k) return find(tree->left, k, index * 2 + 1);
    return index;
}

void AVLTree:: print_node(node* root, std:: vector<int>& nums, int index = 0) {
    if (root == nullptr) return;
    nums[index] = root->key;
    print_node(root->left, nums, index * 2 + 1);
    print_node(root->right, nums, index * 2 + 2);
}

void AVLTree:: print() { // вывод дерева в терминал
    print_node(tree, data);
    for (int val : data) cout << val << ' ';
}

AVLTree:: AVLTree(int k) {
    tree = new node(k);
    data.resize(1);
    _size = 0;
}

AVLTree:: AVLTree() {
    tree = nullptr;
    data.resize(0);
    _size = 0;
}

#endif /* TreeMain_h */
