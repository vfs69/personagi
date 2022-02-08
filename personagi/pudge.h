#ifndef PUDGE_H
#define PUDGE_H

#include "Tiny.h"

class Pudge: public Tiny
{
public:
    Pudge();
    void MeatHook(Tiny&);
};

#endif // PUDGE_H
