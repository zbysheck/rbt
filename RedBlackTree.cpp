#include "RedBlackTree.h"


RedBlack::RedBlack(int value, bool isRoot) {
    data = value;
    left = nullptr;
    right = nullptr;
    color = true;
    trueRoot = isRoot;
}

RedBlack::~RedBlack() {
    if(left) delete left;
    if(right) delete right;
}

RedBlack* RedBlack::insert(RedBlack* node) {
    //replace with implementation!
    return this;
}

RedBlack* RedBlack::rotateRight() {
    //replace with implementation!
    return this;
}

RedBlack* RedBlack::rotateLeft() {
    //replace with implementation!
    return this;
}


/*
 From here down, do not edit
*/

RedBlack* RedBlack::genTest1() {
    RedBlack* root = new RedBlack(6, true);
    root->color = false;
    root->right = new RedBlack(7);
    root->right->right = new RedBlack(8);

    return root;
}

RedBlack* RedBlack::genTest2() {
    RedBlack* root = new RedBlack(6, true);
    root->color = false;
    root->left = new RedBlack(5);
    root->left->left = new RedBlack(4);

    return root;
}

RedBlack* RedBlack::genTest3() {
    RedBlack* root = new RedBlack(6, true);
    root->color = false;
    root->right = new RedBlack(7);

    return root;
}

RedBlack* RedBlack::genTest4() {
    RedBlack* root = new RedBlack(6, true);
    root->color = false;
    root->left = new RedBlack(5);

    return root;
}

RedBlack* RedBlack::genTest5() {
    RedBlack* root = new RedBlack(6, true);
    root->color = false;
    root->left = new RedBlack(5);
    root->left->color = false;
    root->right = new RedBlack(7);
    root->right->color = false;
    root->right->right = new RedBlack(8);
    root->right->right->right = new RedBlack(9);

    return root;
}

RedBlack* RedBlack::genTest6() {
    RedBlack* root = new RedBlack(6, true);
    root->color = false;
    root->right = new RedBlack(7);
    root->right->color = false;
    root->left = new RedBlack(5);
    root->left->color = false;
    root->left->left = new RedBlack(4);
    root->left->left->left = new RedBlack(3);

    return root;
}

RedBlack* RedBlack::genTest7() {
    RedBlack* root = new RedBlack(5, true);
    root->color = false;
    root->left = new RedBlack(4);
    root->right = new RedBlack(6);

    return root;
}

RedBlack* RedBlack::genTest8() {
    RedBlack* root = new RedBlack(5, true);
    root->color = false;
    root->right = new RedBlack(6);
    root->right->color = false;
    root->left = new RedBlack(4);
    root->left->color = false;
    root->left->left = new RedBlack(1);

    return root;
}

RedBlack* RedBlack::genTest9() {
    RedBlack* root = new RedBlack(5, true);
    root->color = false;
    root->left = new RedBlack(4);
    root->left->color = false;
    root->right = new RedBlack(7);

    return root;
}


RedBlack* RedBlack::genCheck1() {
    RedBlack* root = new RedBlack(7, true);
    root->color = false;
    root->right = new RedBlack(8);
    root->left = new RedBlack(6);

    return root;
}

RedBlack* RedBlack::genCheck2() {
    RedBlack* root = new RedBlack(5, true);
    root->color = false;
    root->left = new RedBlack(4);
    root->right = new RedBlack(6);

    return root;
}

RedBlack* RedBlack::genCheck3() {
    RedBlack* root = new RedBlack(7, true);
    root->color = false;
    root->left = new RedBlack(6);

    return root;
}

RedBlack* RedBlack::genCheck4() {
    RedBlack* root = new RedBlack(5, true);
    root->color = false;
    root->right = new RedBlack(6);

    return root;
}

RedBlack* RedBlack::genCheck5() {
    RedBlack* root = new RedBlack(6, true);
    root->color = false;
    root->left = new RedBlack(5);
    root->left->color = false;
    root->right = new RedBlack(8);
    root->right->color = false;
    root->right->left = new RedBlack(7);
    root->right->right = new RedBlack(9);

    return root;
}

RedBlack* RedBlack::genCheck6() {
    RedBlack* root = new RedBlack(6, true);
    root->color = false;
    root->right = new RedBlack(7);
    root->right->color = false;
    root->left = new RedBlack(4);
    root->left->color = false;
    root->left->left = new RedBlack(3);
    root->left->right = new RedBlack(5);

    return root;
}

RedBlack* RedBlack::genCheck7() {
    RedBlack* root = new RedBlack(5, true);
    root->color = false;
    root->left = new RedBlack(4);
    root->left->color = false;
    root->left->left = new RedBlack(1);
    root->right = new RedBlack(6);
    root->right->color = false;

    return root;
}

RedBlack* RedBlack::genCheck8() {
    RedBlack* root = new RedBlack(5, true);
    root->color = false;
    root->right = new RedBlack(6);
    root->right->color = false;
    root->left = new RedBlack(2);
    root->left->color = false;
    root->left->left = new RedBlack(1);
    root->left->right = new RedBlack(4);

    return root;
}

RedBlack* RedBlack::genCheck9() {
    RedBlack* root = new RedBlack(6, true);
    root->color = false;
    root->left = new RedBlack(5);
    root->right = new RedBlack(7);
    root->left->left = new RedBlack(4);
    root->left->left->color = false;

    return root;
}

RedBlack* RedBlack::genCheck10() {
    RedBlack* root = new RedBlack(4, true);
    root->color = false;
    root->left = new RedBlack(2);
    root->right = new RedBlack(6);
    root->right->right = new RedBlack(7);
    root->right->right->color = false;
    root->right->left = new RedBlack(5);
    root->right->left->color = false;
    root->right->right->right = new RedBlack(8);
    root->left->left = new RedBlack(1);
    root->left->left->color = false;
    root->left->right = new RedBlack(3);
    root->left->right->color = false;

    return root;
}