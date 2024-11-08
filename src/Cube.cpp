#include "Cube.h"
#include <iostream>
#include <string>

using namespace std;

Cube::Cube(){
    length = 0;
}

Cube::Cube(double length){
    this->length = length;
}

Cube::~Cube(){
    cout << "Cube object destroyed" << endl;
}

double Cube::getLength(){
    return length;
}

void Cube::setLength(double length){
    this->length = length;
}

double Cube::getVolume(){
    return length * length * length;
}

double Cube::getSurfaceArea(){
    return 6 * length * length;
}
