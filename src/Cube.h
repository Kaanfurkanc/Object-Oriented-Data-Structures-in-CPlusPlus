#ifndef CUBE_H
#define CUBE_H
#include <iostream>
#include <string>

using namespace std;

class Cube{
    public:
        Cube();
        Cube(double length);
        virtual ~Cube();

        double getLength();
        void setLength(double length);
        double getVolume();
        double getSurfaceArea();
    private:
        double length;
};

#endif