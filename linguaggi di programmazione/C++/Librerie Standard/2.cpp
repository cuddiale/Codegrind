// Creare una mappa che associa nomi a età, aggiungere alcuni elementi e stamparli.

#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> eta;

    eta["Alice"] = 25;
    eta["Bob"] = 30;
    eta["Charlie"] = 35;

    for (const auto& pair : eta) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}