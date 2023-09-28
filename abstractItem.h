#ifndef ABSTRACTITEM_H
#define ABSTRACTITEM_H

#include <string>

using namespace std;

class item {

    // Item name, used for finding in inventory (ex. Sealing Cube)
    string name;

    // Who to use the item on (enemy, player)
    string target;

    // Which stat the item impacts
    string affect;

    // The number of item uses (1, 2, ... , n, ...)
    int numUses;

    // The amount by which 'affect' applies to the stat
    int amount;
    
};

#endif
