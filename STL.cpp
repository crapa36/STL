//-----------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------



#include "save.h"
#include <list>
#include <set>
#include "String.h"

using namespace std;
extern bool °üÂû;

int main(){
    ifstream in{ "stl.cpp" };
    list<char> l;
    char c;
    while (in>>c) {
        if (islower(c))
            l.push_back(c);
    }
    set<char> setChar;
    setChar.emplace(move(l));
    l.clear();
    l.emplace_back(move(setChar));
    for (const auto& c : l) {
        cout <<c;
    }
    
}