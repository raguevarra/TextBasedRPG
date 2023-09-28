#include "abstractItem.h"
#include <string>

// CTOR for an item
abstractItem::abstractItem(string name, string target, string affect, int numUses, int amount) : name{name}, target{target}, affect{affect}, numUses{numUses}, amount{amount} {}

// DTOR for an item
abstractItem::~abstractItem() {}
