// Usare RAII per gestire l'apertura e la chiusura di un file.

#include <iostream>
#include <fstream>

class FileRAII {
private:
    std::ofstream file;
public:
    FileRAII(const std::string& filename) {
        file.open(filename);
        if (!file) {
            throw std::runtime_error("Impossibile aprire il file");
        }
    }
    ~FileRAII() {
        if (file.is_open()) {
            file.close();
            std::cout << "File chiuso" << std::endl;
        }
    }
    void scrivi(const std::string& contenuto) {
        file << contenuto << std::endl;
    }
};

int main() {
    try {
        FileRAII file("esempio.txt");
        file.scrivi("Ciao, mondo!");
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}