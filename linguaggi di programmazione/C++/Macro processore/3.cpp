// Usare le macro condizionali per compilare parti diverse di codice a seconda di una definizione.

#include <iostream>

#define DEBUG

int main() {
#ifdef DEBUG
    std::cout << "Modalità di debug attiva" << std::endl;
#else
    std::cout << "Modalità di debug disattivata" << std::endl;
#endif
    return 0;
}