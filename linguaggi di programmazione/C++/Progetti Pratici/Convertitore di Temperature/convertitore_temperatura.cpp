#include <iostream>
#include <stdexcept>

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsius_to_kelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheit_to_kelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

double kelvin_to_celsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvin_to_fahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

void convert_temperature(double temp, char from, char to) {
    double result;

    switch (from) {
        case 'C':
            if (to == 'F') {
                result = celsius_to_fahrenheit(temp);
            } else if (to == 'K') {
                result = celsius_to_kelvin(temp);
            } else {
                throw std::invalid_argument("Unità di destinazione non valida");
            }
            break;
        case 'F':
            if (to == 'C') {
                result = fahrenheit_to_celsius(temp);
            } else if (to == 'K') {
                result = fahrenheit_to_kelvin(temp);
            } else {
                throw std::invalid_argument("Unità di destinazione non valida");
            }
            break;
        case 'K':
            if (to == 'C') {
                result = kelvin_to_celsius(temp);
            } else if (to == 'F') {
                result = kelvin_to_fahrenheit(temp);
            } else {
                throw std::invalid_argument("Unità di destinazione non valida");
            }
            break;
        default:
            throw std::invalid_argument("Unità di origine non valida");
    }

    std::cout << "Temperatura convertita: " << result << " " << to << std::endl;
}

int main() {
    double temp;
    char from, to;

    std::cout << "Convertitore di Temperature" << std::endl;
    std::cout << "Inserisci la temperatura: ";
    std::cin >> temp;
    std::cout << "Inserisci l'unità di misura di origine (C, F, K): ";
    std::cin >> from;
    std::cout << "Inserisci l'unità di misura di destinazione (C, F, K): ";
    std::cin >> to;

    try {
        convert_temperature(temp, from, to);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}