#ifndef TINY_H
#define TINY_H

#include <iostream>

using namespace std;

class Tiny
{
public:
    char name[20];
    int health;
    int damage;
    Tiny();
    Tiny(char n[20], int h, int d);
    void attack(Tiny&);
};

#endif // UNIT_H
