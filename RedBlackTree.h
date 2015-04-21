#pragma once

class RedBlack {
public:
    RedBlack(int value, bool isRoot = false);
    ~RedBlack(void);
    RedBlack* insert(RedBlack*);
    RedBlack* rotateRight(void);
    RedBlack* rotateLeft(void);

    /*
        Do not bother with this code
    */
    static RedBlack* genTest1(void);
    static RedBlack* genTest2(void);
    static RedBlack* genTest3(void);
    static RedBlack* genTest4(void);
    static RedBlack* genTest5(void);
    static RedBlack* genTest6(void);
    static RedBlack* genTest7(void);
    static RedBlack* genTest8(void);
    static RedBlack* genTest9(void);

    static RedBlack* genCheck1(void);
    static RedBlack* genCheck2(void);
    static RedBlack* genCheck3(void);
    static RedBlack* genCheck4(void);
    static RedBlack* genCheck5(void);
    static RedBlack* genCheck6(void);
    static RedBlack* genCheck7(void);
    static RedBlack* genCheck8(void);
    static RedBlack* genCheck9(void);
    static RedBlack* genCheck10(void);

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

    RedBlack*& rightRef(void) { return right; }
    RedBlack*& leftRef(void) {return left; }
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