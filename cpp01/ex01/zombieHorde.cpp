#include "Zombie.hpp"
#include <iostream>
#include <sstream>

std::string newName(const std::string& basename, int n) {
    std::ostringstream oss;
    oss << basename << n;
    return oss.str();
}

Zombie* zombieHorde(int N, std::string basename) {
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        new (&horde[i]) Zombie(newName(basename, i));
    }
    return horde;
}

