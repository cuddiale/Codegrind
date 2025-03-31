// Creare una classe con un distruttore che chiude un file aperto.

#include <iostream>
#include <fstream>

class GestoreFile {
private:
    std::ofstream file;
public:
    GestoreFile(const std::string& filename

) {
        file.open(filename);
        if (file.is_open()) {
            std::cout << "File aperto" << std::endl;
        }
    }
    ~GestoreFile() {
        if (file.is_open()) {
            file.close();
            std::cout << "File chiuso" << std::endl;
        }
    }
};

int main() {
    GestoreFile gf("esempio.txt");
    return 0;
}