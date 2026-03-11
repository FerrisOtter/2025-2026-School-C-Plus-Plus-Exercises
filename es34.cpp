#include <iostream>

using namespace std;

int sequenza[32];
int risultato_parziale;
int inizio_blocco;
int esponente_corrente;
int potenza_calcolata;

void applicaTrasformazioni();
void calcolaDecimali();
void binarioInDecimale();
void calcolaPotenzaDue();

int main() {
    for (int i = 0; i < 32; i++) {
        cout <<"inserire un numero" <<endl;
        cin >> sequenza[i];
    }

    applicaTrasformazioni();

    for (int i = 0; i < 32; i++) {
        cout << sequenza[i] << " ";
        if ((i + 1) % 8 == 0) cout << "| ";
    }
    cout << endl;

    calcolaDecimali();

    return 0;
}

void applicaTrasformazioni() {
    for (int i = 0; i < 32; i++) {
        if (sequenza[i] != 0 && sequenza[i] % 5 == 0 && sequenza[i] % 3 == 0) {
            if (sequenza[i] > 0) {
                sequenza[i] = 0;
            } else {
                sequenza[i] = 1;
            }
        }
    }
}

void calcolaDecimali() {
    for (int blocco = 0; blocco < 4; blocco++) {
        inizio_blocco = blocco * 8;
        binarioInDecimale();
        cout << "Decimale " << blocco + 1 << ": " << risultato_parziale << endl;
    }
}

void binarioInDecimale() {
    risultato_parziale = 0;

    if (sequenza[inizio_blocco] == 1) {
        risultato_parziale = -128;
    }

    for (int i = 1; i < 8; i++) {
        if (sequenza[inizio_blocco + i] == 1) {
            esponente_corrente = 7 - i;
            calcolaPotenzaDue();
            risultato_parziale += potenza_calcolata;
        }
    }
}

void calcolaPotenzaDue() {
    potenza_calcolata = 1;
    for (int i = 0; i < esponente_corrente; i++) {
        potenza_calcolata *= 2;
    }
}