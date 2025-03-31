// Creare una classe con un distruttore che chiude un file aperto nel costruttore.

#include <iostream>
#include <fstream>

class FileHandler {
private:
    std::ofstream file;
public:
    FileHandler(const std::string& filename) {
        file.open(filename);
        if (file.is_open()) {
            std::cout << "File aperto" << std::endl;
        }
    }
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File chiuso" << std::endl;
        }
    }
};

int main() {
    FileHandler fh("esempio.txt");
    return 0;
}