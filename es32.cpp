#include <iostream>
#include <cstring>

using namespace std;

const int NUM_NOMI = 5;
const int LUNGHEZZA_MAX = 50;

void caricaNomi(char elenco[][LUNGHEZZA_MAX]) {
    for (int i = 0; i < NUM_NOMI; i++) {
        cout << "Inserisci nome: ";
        cin.get(elenco[i], LUNGHEZZA_MAX);
        cin.ignore(1000, '\n');
    }
}

void stampaPrimoAlfabetico(char elenco[][LUNGHEZZA_MAX]) {
    char primo[LUNGHEZZA_MAX];

    strcpy(primo, elenco[0]);

    for (int i = 1; i < NUM_NOMI; i++) {
        if (strcmp(elenco[i], primo) < 0) {
            strcpy(primo, elenco[i]);
        }
    }

    cout << "Risultato: " << primo << endl;
}

int main() {
    char nomi[NUM_NOMI][LUNGHEZZA_MAX];

    caricaNomi(nomi);
    stampaPrimoAlfabetico(nomi);

    return 0;
}
