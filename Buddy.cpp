#include <iostream>
#include "Buddy.h"

template <class T>
void Buddy<T>::poop() {
    while (m_shits > 0) {
        std::cout << " SOME SHIT ";
        m_shits--;
    }
    std::cout << std::endl;
}

// template <class T>
// T Buddy<T>::getAge() {
//     return m_age;
// }