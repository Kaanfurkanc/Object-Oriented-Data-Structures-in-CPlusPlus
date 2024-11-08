#include "Cube.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Cube c;

    c.setLength(5);
    cout << "Volume: " << c.getVolume() << endl;
    cout << "Surface Area: " << c.getSurfaceArea() << endl;
    return 0;
}