#include <iostream>
#include <string>
#include <unordered_map>
#include <stdexcept>

std::unordered_map<std::string, std::string> comuni = {
    {"H501", "ROMA"},
    {"F205", "MILANO"},
    {"F839", "NAPOLI"},
    // Aggiungi altri comuni qui
};

std::string estrai_nome(const std::string& codice) {
    std::string vocali = "AEIOU";
    std::string consonanti;
    for (char c : codice) {
        if (vocali.find(c) == std::string::npos) {
            consonanti += c;
        }
    }
    return consonanti;
}

std::string estrai_data_nascita(const std::string& codice, char sesso) {
    std::string mese_codice = "ABCDEHLMPRST";
    int anno = std::stoi(codice.substr(0, 2));
    if (anno < 40) {
        anno += 2000;
    } else {
        anno += 1900;
    }
    int mese = mese_codice.find(codice[2]) + 1;
    int giorno = std::stoi(codice.substr(3, 2));
    if (sesso == 'F') {
        giorno -= 40;
    }
    return std::to_string(giorno) + "/" + std::to_string(mese) + "/" + std::to_string(anno);
}

std::string estrai_comune(const std::string& codice) {
    return comuni.count(codice) ? comuni[codice] : "Comune sconosciuto";
}

void decodifica_codice_fiscale(const std::string& cf) {
    if (cf.length() != 16) {
        throw std::invalid_argument("Codice fiscale non valido.");
    }

    std::string cognome = estrai_nome(cf.substr(0, 3));
    std::string nome = estrai_nome(cf.substr(3, 3));
    char sesso = std::stoi(cf.substr(9, 2)) > 31 ? 'F' : 'M';
    std::string data_nascita = estrai_data_nascita(cf.substr(6, 5), sesso);
    std::string comune = estrai_comune(cf.substr(11, 4));

    std::cout << "Cognome: " << cognome << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Data di Nascita: " << data_nascita << std::endl;
    std::cout << "Sesso: " << sesso << std::endl;
    std::cout << "Comune di Nascita: " << comune << std::endl;
}

int main() {
    std::cout << "Decodifica Codice Fiscale" << std::endl;

    std::string cf;
    std::cout << "Inserisci il codice fiscale: ";
    std::cin >> cf;

    try {
        decodifica_codice_fiscale(cf);
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}