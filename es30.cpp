#include <iostream>
#include <ctype.h>
using namespace std;

char frase[100];
int i;
int contcar, contpar, paroleinizvoc;
char c;

void Ingresso(void) {
    cout << "Inserisci una frase (max 99 caratteri): ";
    cin.get(frase, 99);
}

void Stampa(void) {
    cout << "Frase: " << frase << endl;
}

void ContaCaratteri() {
    i = 0;
    contcar = 0;
    while (frase[i] != '\0') {
        if (frase[i] != ' ') {
            contcar = contcar + 1;
        }
        i = i + 1;
    }
    cout << "La frase contiene " << contcar << " caratteri (esclusi spazi)" << endl;
}

void ContaParole(void) {
    i = 0;
    contpar = 0;
    while (frase[i] != '\0') {
        if (frase[i] != ' ') {
            if (i == 0 || frase[i - 1] == ' ') {
                contpar = contpar + 1;
            }
        }
        i = i + 1;
    }
    cout << "La frase contiene " << contpar << " parole" << endl;
}

void Ccontaparvoc() {
    i = 0;
    paroleinizvoc = 0;
    while (frase[i] != '\0') {
        if (frase[i] != ' ') {
            if (i == 0 || frase[i - 1] == ' ') {
                c = (char)tolower(frase[i]);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    paroleinizvoc = paroleinizvoc + 1;
                }
            }
        }
        i = i + 1;
    }
    cout << "Parole che iniziano con una vocale: " << paroleinizvoc << endl;
}

int main() {
    Ingresso();
    Stampa();
    cout << endl;
    ContaCaratteri();
    ContaParole();
    Ccontaparvoc();

    cout << endl;
    system("Pause");
    return 0;
}