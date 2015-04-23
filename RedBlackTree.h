#pragma once

class RedBlack {
public:
    RedBlack(int value, bool isRoot = false);
    ~RedBlack();
    RedBlack* insert(RedBlack*);
    RedBlack* rotateRight();
    RedBlack* rotateLeft();
    void wypisz(int level);

    /*
        Do not bother with this code
    */
    static RedBlack* genTest1();
    static RedBlack* genTest2();
    static RedBlack* genTest3();
    static RedBlack* genTest4();
    static RedBlack* genTest5();
    static RedBlack* genTest6();
    static RedBlack* genTest7();
    static RedBlack* genTest8();
    static RedBlack* genTest9();

    static RedBlack* genCheck1();
    static RedBlack* genCheck2();
    static RedBlack* genCheck3();
    static RedBlack* genCheck4();
    static RedBlack* genCheck5();
    static RedBlack* genCheck6();
    static RedBlack* genCheck7();
    static RedBlack* genCheck8();
    static RedBlack* genCheck9();
    static RedBlack* genCheck10();

    friend bool operator==(const RedBlack& one, const RedBlack& two) {
        if(one.color != two.color) return false;
        if(one.data != two.data) return false;
        if(one.right == nullptr && two.right != nullptr) return false;
        if(one.left == nullptr && two.left != nullptr) return false;
        if(one.right != nullptr && two.right == nullptr) return false;
        if(one.left != nullptr && one.left == nullptr) return false;
        if(one.trueRoot != two.trueRoot) return false;

        //having ruled out all ways the nodes aren't equal...

        bool rightEq = one.right == nullptr || *(one.right) == *(two.right);
        bool leftEq = one.left == nullptr || *(one.left) == *(two.left);

        return rightEq && leftEq;
    }

    RedBlack*& rightRef() { return right; }
    RedBlack*& leftRef() {return left; }
    /*
        Especially the "Ref" functions that truly abuse the concept of private data.
        Never call those functions, their only use is launching test functions.
    */

private:
    bool color;	//red = true, black = false
    bool trueRoot;	//for enforcing rule 1
    int data;
    RedBlack* left;
    RedBlack* right;
};