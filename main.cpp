#include "RedBlackTree.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //tests left rotation when the root is changed
    RedBlack* test1 = RedBlack::genTest1();
    test1 = test1->rotateLeft();
    RedBlack* check1 = RedBlack::genCheck1();
    if(*test1 == *check1) {
        cout << "Test 1 passed." << endl;
    }
    else {
        cout << "Test 1 failed." << endl;
    }

    //tests right rotation when the root is changed
    RedBlack* test2 = RedBlack::genTest2();
    test2 = test2->rotateRight();
    RedBlack* check2 = RedBlack::genCheck2();
    if(*test2 == *check2) {
        cout << "Test 2 passed." << endl;
    }
    else {
        cout << "Test 2 failed." << endl;
    }

    //tests left rotation when there are only two nodes
    RedBlack* test3 = RedBlack::genTest3();
    test3 = test3->rotateLeft();
    RedBlack* check3 = RedBlack::genCheck3();
    if(*test3 == *check3) {
        cout << "Test 3 passed." << endl;
    }
    else {
        cout << "Test 3 failed." << endl;
    }

    //tests right rotation when there are only two nodes
    RedBlack* test4 = RedBlack::genTest4();
    test4 = test4->rotateRight();
    RedBlack* check4 = RedBlack::genCheck4();
    if(*test4 == *check4) {
        cout << "Test 4 passed." << endl;
    }
    else {
        cout << "Test 4 failed." << endl;
    }

    //tests left rotation when the root does not change
    RedBlack* test5 = RedBlack::genTest5();
    test5->rightRef() = test5->rightRef()->rotateLeft();
    RedBlack* check5 = RedBlack::genCheck5();
    if(*test5 == *check5) {
        cout << "Test 5 passed." << endl;
    }
    else {
        cout << "Test 5 failed." << endl;
    }

    //tests right rotation when the root does not change
    RedBlack* test6 = RedBlack::genTest6();
    test6->leftRef() = test6->leftRef()->rotateRight();
    RedBlack* check6 = RedBlack::genCheck6();
    if(*test6 == *check6) {
        cout << "Test 6 passed." << endl;
    }
    else {
        cout << "Test 6 failed." << endl;
    }

    //tests inserting a node where colors are changed and the root must be changed back to black
    RedBlack* test7 = RedBlack::genTest7();
    test7 = test7->insert(new RedBlack(1));
    RedBlack* check7 = RedBlack::genCheck7();
    if(*test7 == *check7) {
        cout << "Test 7 passed." << endl;
    }
    else {
        cout << "Test 7 failed." << endl;
    }

    //tests inserting a node which causes an external-case rotation
    RedBlack* test8 = RedBlack::genTest8();
    test8 = test8->insert(new RedBlack(2));
    RedBlack* check8 = RedBlack::genCheck8();
    if(*test8 == *check8) {
        cout << "Test 8 passed." << endl;
    }
    else {
        cout << "Test 8 failed." << endl;
        test8->wypisz(0);
        check8->wypisz(0);
    }

    //tests inserting a node which causes an internal-case rotation
    RedBlack* test9 = RedBlack::genTest9();test9->wypisz(0);
    test9 = test9->insert(new RedBlack(6));
    RedBlack* check9 = RedBlack::genCheck9();
    if(*test9 == *check9) {
        cout << "Test 9 passed." << endl;
    }
    else {
        cout << "Test 9 failed." << endl;
        test9->wypisz(0);
        check9->wypisz(0);
    }

    //tests building a full tree
    RedBlack* test10 = new RedBlack(1, true);
    test10 = test10->insert(new RedBlack(2));
    test10 = test10->insert(new RedBlack(3));
    test10 = test10->insert(new RedBlack(4));
    test10 = test10->insert(new RedBlack(5));
    test10 = test10->insert(new RedBlack(6));
    test10 = test10->insert(new RedBlack(7));
    test10 = test10->insert(new RedBlack(8));
    RedBlack* check10 = RedBlack::genCheck10();
    if(*test10 == *check10) {
        cout << "Test 10 passed." << endl;
    }
    else {
        cout << "Test 10 failed." << endl;
    }

    delete test1;
    delete test2;
    delete test3;
    delete test4;
    delete test5;
    delete test6;
    delete test7;
    delete test8;
    delete test9;
    delete test10;
    delete check1;
    delete check2;
    delete check3;
    delete check4;
    delete check5;
    delete check6;
    delete check7;
    delete check8;
    delete check9;
    delete check10;

    return 0;
}