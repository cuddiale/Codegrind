// Crea una classe Cerchio che rappresenti un cerchio nel piano cartesiano. Aggiungi i metodi per impostare il raggio del cerchio, calcolarne l'area e la circonferenza.

#include <iostream>
#include <cmath>
using namespace std;

class Cerchio {
private:
    double raggio;

public:
    void setRaggio(double newRaggio) {
        raggio = newRaggio;
    }

    double calcolaArea() {
        return M_PI * raggio * raggio;
    }

    double calcolaCirconferenza() {
        return 2 * M_PI * raggio;
    }
};

int main() {
    Cerchio cerchio;
    cerchio.setRaggio(3.0);
    cout << "Area del cerchio: " << cerchio.calcolaArea() << endl;
    cout << "Circonferenza del cerchio: " << cerchio.calcolaCirconferenza() << endl;

    return 0;
}