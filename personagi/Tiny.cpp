#include "Tiny.h"
#include "string.h"

Tiny::Tiny()
{
    strcpy(this->name, "Tiny");
    this->health = 100;
    this->damage =10;
    }

Tiny::Tiny(char n[20], int h, int d)
{
    strcpy(this->name, n);
    this->health = h;
    this->damage =d;
}

void Tiny::attack(Tiny &enemy) {
    int uron = this->damage;
    enemy.health -= uron;
    cout <<this->name << " atakuet " << enemy.name
        << " i nanosit " << uron << " urona!" << endl;
    cout << this->name << " (" << this->health << ") HP" << endl;
    cout << enemy.name << " (" << enemy.health << ") HP" << endl;
}



