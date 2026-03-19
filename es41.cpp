#include <iostream>
using namespace std;

void leggiDatiGenerali(double &cons, double &prezzo) {
    cons = -1;
    while (cons <= 0) {
        cout << "Inserisci il consumo dell'auto (km con un litro): ";
        cin >> cons;
    }

    prezzo = -1;
    while (prezzo <= 0) {
        cout << "Inserisci il prezzo del carburante al litro: ";
        cin >> prezzo;
    }
}

double calcolaCostoViaggio(double km, double kmLitro, double prezzoLitro) {
    double litriNecessari = (double)km / kmLitro;
    return litriNecessari * prezzoLitro;
}

void gestisciViaggio(double kmLitro, double prezzoLitro, int numeroViaggio) {
    double km;
    cout << "\n--- Viaggio numero " << numeroViaggio << " ---" << endl;
    cout << "Inserisci la lunghezza del percorso in km: ";
    cin >> km;

    double costo = calcolaCostoViaggio(km, kmLitro, prezzoLitro);
    cout << "Il costo totale per questo viaggio e': " << costo << " Euro" << endl;
}

int main() {
    double consumoAlLitro, prezzoCarburante;

    leggiDatiGenerali(consumoAlLitro, prezzoCarburante);

    gestisciViaggio(consumoAlLitro, prezzoCarburante, 1);
    gestisciViaggio(consumoAlLitro, prezzoCarburante, 2);
    gestisciViaggio(consumoAlLitro, prezzoCarburante, 3);

    return 0;
}