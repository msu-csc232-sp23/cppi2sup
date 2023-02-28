#include <iostream>
#include "Dog.h"
#include "GreatDaehn.h"
#include "Yorkie.h"

int main() {

    Dog * dogPtr{ new GreatDaehn{ } };
    dogPtr->bark();
    delete dogPtr;

    dogPtr = new Yorkie();
    dogPtr->bark();
    delete dogPtr;

    return 0;
}
