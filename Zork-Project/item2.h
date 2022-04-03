#ifndef ITEM2_H
#define ITEM2_H

#include <map>
#include <string>
#include <vector>
using namespace std;
using std::vector;


class item2
{
private:
    string itemname;
    bool found;
    bool used;
public:
    item2(string itemname);
    void displayitem();
    void hideitem();
};



#endif // ITEM2_H
