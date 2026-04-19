#include <iostream>

using namespace std;

int trovaPrezzoMassimo(float p[], int n) {
    int indiceMax = 0;
    for (int i = 1; i < n; i++) {
        if (p[i] > p[indiceMax]) {
            indiceMax = i;
        }
    }
    return indiceMax;
}

float calcolaValoreTotale(float p[], int q[], int n) {
    float totale = 0;
    for (int i = 0; i < n; i++) {
        totale += (p[i] * q[i]);
    }
    return totale;
}

void stampaSottoScorta(int c[], char n_prod[][50], int q[], int n) {
    cout << "\n--- Prodotti con quantita' < 5 ---" << endl;
    bool trovato = false;
    for (int i = 0; i < n; i++) {
        if (q[i] < 5) {
            cout << "Codice: " << c[i] << " | Nome: " << n_prod[i] << " | Qta: " << q[i] << endl;
            trovato = true;
        }
    }
    if (!trovato) {
        cout << "Nessun prodotto trovato." << endl;
    }
}

int main() {
    int codici[100];
    char nomi[100][50];
    float prezzi[100];
    int quantita[100];
    int n;

    cout << "Quanti prodotti vuoi inserire? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Codice: ";
        cin >> codici[i];
        cin.ignore();
        cout << "Nome: ";
        cin.get(nomi[i], 50);
        cin.ignore();
        cout << "Prezzo: ";
        cin >> prezzi[i];
        cout << "Quantita': ";
        cin >> quantita[i];
    }

    cout << "\n--- Elenco Prodotti ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Codice: " << codici[i] << " | Nome: " << nomi[i] 
             << " | Prezzo: " << prezzi[i] << " Euro | Quantita: " << quantita[i] << endl;
    }

    int cerca;
    cout << "\nInserisci codice da cercare: ";
    cin >> cerca;
    
    int indiceTrovato = -1;
    for (int i = 0; i < n; i++) {
        if (codici[i] == cerca) {
            indiceTrovato = i;
        }
    }

    if (indiceTrovato != -1) {
        cout << "Trovato -> Nome: " << nomi[indiceTrovato] << " | Prezzo: " << prezzi[indiceTrovato] << " | Qta: " << quantita[indiceTrovato] << endl;
    } else {
        cout << "Prodotto non trovato" << endl;
    }

    int idxMax = trovaPrezzoMassimo(prezzi, n);
    cout << "\nProdotto piu' costoso: " << nomi[idxMax] << " (" << prezzi[idxMax] << " Euro)" << endl;

    cout << "Valore totale magazzino: " << calcolaValoreTotale(prezzi, quantita, n) << " Euro" << endl;

    stampaSottoScorta(codici, nomi, quantita, n);

    return 0;
}