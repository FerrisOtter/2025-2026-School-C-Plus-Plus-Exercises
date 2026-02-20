#include <iostream>

using namespace std;

const int N = 10;

char codici[N][20];
char nomi[N][50];
float prezzi[N];
int quantita[N];

void inserimentoDati() {
    for (int i = 0; i < N; i++) {
        cout << "\nProdotto " << i + 1 << endl;
        cout << "Codice: ";
        cin >> codici[i];
        cout << "Nome: ";
        cin >> nomi[i];
        cout << "Prezzo: ";
        cin >> prezzi[i];
        cout << "Quantita: ";
        cin >> quantita[i];
    }
}

bool stringheUguali(char s1[], char s2[]) {
    int j = 0;
    while (s1[j] != '\0' || s2[j] != '\0') {
        if (s1[j] != s2[j]) return false;
        j++;
    }
    return true;
}

void visualizzaInventario() {
    int indiceMax = 0;
    for (int i = 0; i < N; i++) {
        float valoreSingolo = prezzi[i] * quantita[i];
        cout << "Codice: " << codici[i] << " | Nome: " << nomi[i] 
             << " | Qta: " << quantita[i] << " | Valore: " << valoreSingolo << endl;
        
        if (valoreSingolo > (prezzi[indiceMax] * quantita[indiceMax])) {
            indiceMax = i;
        }
    }
    cout << "\nProdotto con valore piu alto: " << nomi[indiceMax] << endl;
}

void gestioneOperazioni() {
    char cercaCodice[20];
    cout << "\nInserisci codice da cercare: ";
    cin >> cercaCodice;

    int trovato = -1;
    for (int i = 0; i < N; i++) {
        if (stringheUguali(codici[i], cercaCodice)) {
            trovato = i;
            break;
        }
    }

    if (trovato != -1) {
        cout << "Trovato: " << nomi[trovato] << " | Prezzo: " << prezzi[trovato] << " | Qta: " << quantita[trovato] << endl;
        
        int operazione, qtaVar;
        cout << "1) Carica 2) Vendi: ";
        cin >> operazione;
        cout << "Quantita: ";
        cin >> qtaVar;

        if (operazione == 1) {
            quantita[trovato] += qtaVar;
        } else if (operazione == 2) {
            if (quantita[trovato] >= qtaVar) {
                quantita[trovato] -= qtaVar;
            } else {
                cout << "Errore: scorta insufficiente." << endl;
            }
        }
    } else {
        cout << "Prodotto non trovato" << endl;
    }
}

void visualizzaStatistiche() {
    float valoreTotaleMagazzino = 0;
    int sottoScorta = 0;
    for (int i = 0; i < N; i++) {
        valoreTotaleMagazzino += (prezzi[i] * quantita[i]);
        if (quantita[i] < 5) {
            sottoScorta++;
        }
    }
    cout << "Valore complessivo: " << valoreTotaleMagazzino << endl;
    cout << "Prodotti con meno di 5 pezzi: " << sottoScorta << endl;
}

int main() {
    inserimentoDati();
    visualizzaInventario();
    gestioneOperazioni();
    visualizzaStatistiche();

    return 0;
}