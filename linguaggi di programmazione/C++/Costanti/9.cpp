// Utilizzare una costante in un loop for.

#include <iostream>
using namespace std;

int main() {
    const int N = 5;

    for (int i = 0; i < N; ++i) {
        cout << "Iterazione " << i + 1 << endl;
    }

    return 0;
}