#include <iostream>
using namespace std;

void leggiCaratteri(char &c1, char &c2, char &c3) {
    cout << "Inserisci il primo carattere: ";
    cin >> c1;
    cout << "Inserisci il secondo carattere: ";
    cin >> c2;
    cout << "Inserisci il terzo carattere: ";
    cin >> c3;
}

int contaMaiuscole(char c1, char c2, char c3) {
    int conteggio = 0;

    if (c1 >= 'A' && c1 <= 'Z') {
        conteggio++;
    }
    if (c2 >= 'A' && c2 <= 'Z') {
        conteggio++;
    }
    if (c3 >= 'A' && c3 <= 'Z') {
        conteggio++;
    }

    return conteggio;
}

void stampaRisultato(int quante) {
    cout << "\nNumero di lettere maiuscole inserite: " << quante << endl;
}

int main() {
    char ch1, ch2, ch3;
    int totale;

    leggiCaratteri(ch1, ch2, ch3);
    
    totale = contaMaiuscole(ch1, ch2, ch3);
    
    stampaRisultato(totale);

    return 0;
}