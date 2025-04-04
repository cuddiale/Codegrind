// Creare un programma che utilizza `std::thread` per calcolare la somma di un array suddividendo il lavoro tra più thread.

#include <iostream>
#include <thread>
#include <vector>
#include <numeric>

void calcolaSomma(int* arr, int start, int end, int& risultato) {
    risultato = std::accumulate(arr + start, arr + end, 0);
}

int main() {
    const int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int risultato1 = 0, risultato2 = 0;

    std::thread t1(calcolaSomma, arr, 0, size / 2, std::ref(risultato1));
    std::thread t2(calcolaSomma, arr, size / 2, size, std::ref(risultato2));

    t1.join();
    t2.join();

    int somma_totale = risultato1 + risultato2;
    std::cout << "Somma totale: " << somma_totale << std::endl;

    return 0;
}