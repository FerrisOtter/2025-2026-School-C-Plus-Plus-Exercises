#include <iostream>

using namespace std;

const int MAX_S = 50;
const int LUNG_NOME = 30;

void aggiungiBonus(float voti[], int n) {
    for (int i = 0; i < n; i++) {
        voti[i] += 2;
        if (voti[i] > 10) {
            voti[i] = 10;
        }
    }
}

int trovaMigliore(float voti[], int n) {
    int im = 0;
    for (int i = 1; i < n; i++) {
        if (voti[i] > voti[im]) {
            im = i;
        }
    }
    return im;
}

int main() {
    int n;
    char nomi[MAX_S][LUNG_NOME];
    float voti[MAX_S];

    cout << "Numero studenti: ";
    cin >> n;

    if (n > MAX_S) n = MAX_S;

    for (int i = 0; i < n; i++) {
        cout << "Nome: ";
        cin >> nomi[i];
        cout << "Voto: ";
        cin >> voti[i];
    }

    aggiungiBonus(voti, n);
    int indiceMigliore = trovaMigliore(voti, n);

    cout << "\n--- Elenco Aggiornato ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << nomi[i] << ": " << voti[i] << endl;
    }

    cout << "\nMigliore: " << nomi[indiceMigliore] << " con " << voti[indiceMigliore] << endl;

    return 0;
}