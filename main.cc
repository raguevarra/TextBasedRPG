#include "abstractItem.h"
#include <iostream>

using namespace std;

int main() {
    abstractItem *sealingCube = new abstractItem{"Sealing Cube", "enemy", "entity", 1, -1};

    cout << sealingCube->name << endl;
    cout << sealingCube->target << endl;
    cout << sealingCube->affect << endl;
    cout << sealingCube->numUses << endl;
    cout << sealingCube->amount << endl;
    
}