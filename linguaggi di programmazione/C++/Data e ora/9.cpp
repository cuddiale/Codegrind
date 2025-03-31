// Scrivi un programma che calcoli il tempo trascorso tra due istanti utilizzando la classe std::chrono::duration.

#include <iostream>
#include <chrono>
using namespace std;

int main() {
    // Definisci due istanti di tempo
    auto inizio = chrono::high_resolution_clock::now();
    // Esegui qualche operazione...
    auto fine = chrono::high_resolution_clock::now();

    // Calcola la durata tra i due istanti
    auto durata = chrono::duration_cast<chrono::microseconds>(fine - inizio).count();

    cout << "Tempo trascorso: " << durata << " microsecondi" << endl;

    return 0;
}
