#include <iostream>
using namespace std;

void contaEsiti(int E[], int n, int &promossi, int &bocciati) {
    promossi = 0;
    bocciati = 0;
    for (int i = 0; i < n; i++) {
        if (E[i] == 1) {
            promossi++;
        } else {
            bocciati++;
        }
    }
    cout << "Promossi: " << promossi << endl;
    cout << "Bocciati: " << bocciati << endl;
}

void calcolaConsecutivi(int E[], int n) {
    int maxSeq = 0;
    int attuale = 0;
    for (int i = 0; i < n; i++) {
        if (E[i] == 1) {
            attuale++;
            if (attuale > maxSeq) {
                maxSeq = attuale;
            }
        } else {
            attuale = 0;
        }
    }
    cout << "Massimo consecutivi: " << maxSeq << endl;
}

int main() {
    int n = 10;
    int E[10] = {1, 1, 0, 1, 1, 1, 0, 0, 1, 1};
    int p = 0, b = 0;

    contaEsiti(E, n, p, b);
    calcolaConsecutivi(E, n);

    return 0;
}