#include "calcolatrice.h"

float addizione(float a, float b) {
    return a + b;
}

float sottrazione(float a, float b) {
    return a - b;
}

float moltiplicazione(float a, float b) {
    return a * b;
}

float divisione(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0; // Gestione della divisione per zero
    }
}