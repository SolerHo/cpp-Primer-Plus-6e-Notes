// dmamain.cc ---- inheritance, friend, and dma
// compile with dma.cc

#include <iostream>
#include "dma.hh"

int main(void)
{
    using std::cout;
    using std::endl;
    
    baseDMA shirt("Protablelly",8);
    lacksDMA balloon("red","Blimpo",4);
    hasDMA map("Mercator","Buffalo Keys",5);

    cout << "Displaying baseDMA object : \n";
    cout << shirt << endl;

    cout << "Displaying lacksDMA object : \n";
    cout << balloon << endl;

    cout << "Displaying hasDMA object : \n";
    cout << map << endl;

    lacksDMA balloon2(balloon);
    cout << "result os lacksDMA copy : \n";
    cout << balloon2 << endl;

    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment : \n";
    cout << map2 <<endl;
    return 0;
}