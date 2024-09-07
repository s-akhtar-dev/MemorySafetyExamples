/*
Examples of Aliases, Dangling Reference, and Garbage
    Author: Sarah Akhtar
    Date: September 2nd, 2024
*/

#include <iostream>
using namespace std;

//Example of Aliases
void createAlias() {
    int *input1 = new int (100);
    cout << "input1: " << *input1 << endl;

    /*
    Alias: creating an alias between input1 and input2
    Cause: input1 and input2 are bound at the same time
           therefore, they reference the same variable.
    */
    int *input2 = input1;

    *input2 = 200;
    cout << "input1: " << *input1 << endl;
    cout << "input2: " << *input2 << endl;
    cout << endl;

    delete input1;
}

//Example of Garbage
void createGarbage() {
    int *input1 = new int (100);

    /*
    Garbage: creates garbage when assigned to nullptr
    Cause: the memory location of previous data is now
           inaccessible by the program after reassign.
    */
    input1 = nullptr;
}

//Example of Dangling Reference
int* createDanglingReference() {
    int *input1 = new int (100);
    int *input2 = input1;

    cout << "input1: " << *input1 << endl;
    cout << "input2: " << *input2 << endl;

    /*
    Dangling Reference: occurs because input2 points to input1
    Cause: input1 is now deallocated, but input2
           still points to input1 after deallocation
    */
    delete input1;
    cout << "input2: " << *input2 << endl;

    return input1;
}

int main() {
    createAlias();
    createGarbage();
    createDanglingReference();

    return 0;
}