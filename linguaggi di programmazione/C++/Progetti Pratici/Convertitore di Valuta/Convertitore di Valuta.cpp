#include <iostream>
#include <stdexcept>
#include <unordered_map>

std::unordered_map<std::string, double> tassi_di_cambio = {
    {"EURtoUSD", 1.18},
    {"USDtoEUR", 0.85},
    {"EURtoJPY", 129.53},
    {"JPYtoEUR", 0.0077},
    {"USDtoJPY", 109.72},
    {"JPYtoUSD", 0.0091}
};

double converti_valuta(double importo, const std::string& from, const std::string& to) {
    std::string chiave = from + "to" + to;
    if (tassi_di_cambio.find(chiave) != tassi_di_cambio.end()) {
        return importo * tassi_di_cambio[chiave];
    } else {
        throw std::invalid_argument("Conversione non supportata");
    }
}

int main() {
    double importo;
    std::string from, to;

    std::cout << "Convertitore di Valuta" << std::endl;
    std::cout << "Inserisci l'importo: ";
    std::cin >> importo;
    std::cout << "Inserisci la valuta di origine (EUR, USD, JPY): ";
    std::cin >> from;
    std::cout << "Inserisci la valuta di destinazione (EUR, USD, JPY): ";
    std::cin >> to;

    try {
        double risultato = converti_valuta(importo, from, to);
        std::cout << "Importo convertito: " << risultato << " " << to << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}