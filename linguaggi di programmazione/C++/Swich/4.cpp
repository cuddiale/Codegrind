// Chiedi all'utente di inserire una temperatura in gradi Celsius o Fahrenheit e convertila all'altra unità utilizzando il blocco switch.

#include <iostream>
using namespace std;

int main() {
    double temperatura;
    char unita;

    cout << "Inserisci la temperatura: ";
    cin >> temperatura;

    cout << "Seleziona l'unità di misura ('C' per Celsius, 'F' per Fahrenheit): ";
    cin >> unita;

    double temperaturaConvertita;

    switch (unita) {
        case 'C':
            temperaturaConvertita = (temperatura * 9 / 5) + 32;
            cout << "Temperatura convertita in Fahrenheit: " << temperaturaConvertita << " °F" << endl;
            break;
        case 'F':
            temperaturaConvertita = (temperatura - 32) * 5 / 9;
            cout << "Temperatura convertita in Celsius: " << temperaturaConvertita << " °C" << endl;
            break;
        default:
            cout << "Unità di misura non valida." << endl;
            break;
    }

    return 0;
}