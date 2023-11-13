// this is ass btw
#include <iostream>
#include "Buddy.h"

int main() {
    Buddy<int> *jeremy = new Buddy<int>(14, 6);

    jeremy->poop();

    std::cout << jeremy->getAge() << std::endl;

    delete jeremy;
}