// Crea una classe base StrumentoMusicale con un metodo virtuale eseguiSuono che esegue un suono con lo strumento musicale.

#include <iostream>
#include <string>
using namespace std;

class StrumentoMusicale {
public:
    virtual void eseguiSuono() = 0;
};

int main() {
    StrumentoMusicale* s;
    // s = new Chitarra();
    // s = new Pianoforte();
    // ...

    return 0;
}