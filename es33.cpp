#include <iostream>

using namespace std;

const int MAX = 100;
char inputBit[9];
int valoreDecimale;

int pari[MAX];
int contPari = 0;

int dispari[MAX];
int contDispari = 0;

void convertiC2() {
    valoreDecimale = 0;

    if (inputBit[0] == '1') {
        valoreDecimale = -128;
    }

    int peso = 64;
    for (int i = 1; i < 8; i++) {
        if (inputBit[i] == '1') {
            valoreDecimale += peso;
        }
        peso /= 2;
    }
}

void stampaVettori() {
    cout << "\nNumeri PARI: ";
    for (int i = 0; i < contPari; i++) {
        cout << pari[i] << " ";
    }
    
    cout << "\nNumeri DISPARI: ";
    for (int i = 0; i < contDispari; i++) {
        cout << dispari[i] << " ";
    }
    cout << endl;
}

void acquisisciDati() {
    bool continua = true;

    while (continua) {
        cout << "Inserisci 8 bit (o 'f' per fine): ";
        
        char primoCarat;
        primoCarat = cin.get();

        if (primoCarat == 'f') {
            cin.ignore(100, '\n'); 
            continua = false;
        } 
        else if (primoCarat == '0' || primoCarat == '1') {
            inputBit[0] = primoCarat;
            for (int i = 1; i < 8; i++) {
                inputBit[i] = cin.get();
            }
            
            cin.ignore(100, '\n');

            convertiC2();

            if (valoreDecimale % 2 == 0) {
                if (contPari < MAX) {
                    pari[contPari] = valoreDecimale;
                    contPari++;
                }
            } else {
                if (contDispari < MAX) {
                    dispari[contDispari] = valoreDecimale;
                    contDispari++;
                }
            }
        } else {
            if (primoCarat != '\n') {
                cin.ignore(100, '\n');
            }
        }
    }
}

int main() {
    acquisisciDati();
    stampaVettori();

    return 0;
}
