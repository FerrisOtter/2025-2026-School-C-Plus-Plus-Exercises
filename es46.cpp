#include <iostream>
using namespace std;

bool verificaDuplicato(int vet[], int numero, int limite) {
    int i = 0;
    bool trovato = false;
    while (i < limite) {
        if (vet[i] == numero) {
            trovato = true;
        }
        i++;
    }
    return trovato;
}

void caricaVettore(int vet[], int nVettore) {
    int i = 0;
    while (i < 10) {
        int valore;
        cout << "Vettore " << nVettore << ", inserisci elemento [" << i << "]: ";
        cin >> valore;

        if (verificaDuplicato(vet, valore, i)) {
            cout << "Errore: numero gia' presente. Riprova." << endl;
        } else {
            vet[i] = valore;
            i++;
        }
    }
}

void confrontaEStampa(int v1[], int v2[]) {
    int i = 0;
    int j;
    
    while (i < 10) {
        j = 0;
        while (j < 10) {
            if (v1[i] == v2[j]) {
                cout << "Elemento comune: " << v1[i] 
                     << " (Indice num1: " << i 
                     << ", Indice num2: " << j << ")" << endl;
            }
            j++;
        }
        i++;
    }
}

int main() {
    int num1[10];
    int num2[10];

    caricaVettore(num1, 1);
    caricaVettore(num2, 2);
    confrontaEStampa(num1, num2);

    return 0;
}