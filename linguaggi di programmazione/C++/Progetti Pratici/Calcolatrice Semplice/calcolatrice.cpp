#include <iostream>
#include <stdexcept>

double somma(double a, double b) {
    return a + b;
}

double sottrazione(double a, double b) {
    return a - b;
}

double moltiplicazione(double a, double b) {
    return a * b;
}

double divisione(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Errore: divisione per zero");
    }
    return a / b;
}

int main() {
    double num1, num2;
    char operazione;

    std::cout << "Calcolatrice Semplice" << std::endl;
    std::cout << "Inserisci il primo numero: ";
    std::cin >> num1;
    std::cout << "Inserisci il secondo numero: ";
    std::cin >> num2;
    std::cout << "Seleziona l'operazione (+, -, *, /): ";
    std::cin >> operazione;

    try {
        double risultato;
        switch (operazione) {
            case '+':
                risultato = somma(num1, num2);
                break;
            case '-':
                risultato = sottrazione(num1, num2);
                break;
            case '*':
                risultato = moltiplicazione(num1, num2);
                break;
            case '/':
                risultato = divisione(num1, num2);
                break;
            default:
                std::cerr << "Operazione non valida" << std::endl;
                return 1;
        }
        std::cout << "Risultato: " << risultato << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}