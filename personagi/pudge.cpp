#include "pudge.h"
#include "string.h"

Pudge::Pudge()
{
    strcpy(this->name, "Pudge");
    this->health = 150;
    this->damage = 8;

}
void Pudge::MeatHook(Tiny &enemy){
    int uron = this->damage * 1.8;
    enemy.health -= uron;
    cout <<this->name << "  atakuet " << enemy.name
        << "  i nanosit " << uron << "  urona! " << endl;
    cout << this->name << " (" << this->health << ") HP" << endl;
    cout << enemy.name << " (" << enemy.health << ") HP" << endl;
}
