#include "riki.h"
#include "string.h"

Riki::Riki()
{
    strcpy(this->name, "Riki");
    this->health = 125;
    this->damage = 15;

}

void Riki::MeatHook(Tiny &enemy) {
    int uron = this->damage * 1.2;
    enemy.health -= uron;
    cout <<this->name << "  atakuet " << enemy.name
        << "  i nanosit " << uron << " urona! " << endl;
    cout << this->name << " (" << this->health << ") HP" << endl;
    cout << enemy.name << " (" << enemy.health << ") HP" << endl;
}
