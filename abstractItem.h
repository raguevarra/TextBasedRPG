#ifndef ABSTRACTITEM_H
#define ABSTRACTITEM_H

#include <string>

using namespace std;

class abstractItem {

    // CTOR for an item
    abstractItem(string name, string target, string affect, int numUses, int amount);

    // DTOR for an item
    virtual ~abstractItem();

    // The name of the item (ex. Sealing Cube)
    string name;

    // The target of the item (ex. player, enemy)
    string target;

    // The stat that the item affects (ex. Agility)
    string affect;

    // The number of uses one of this item has
    int numUses;

    // The amount by which 'affect' is applied
    int amount;

};

#endif
