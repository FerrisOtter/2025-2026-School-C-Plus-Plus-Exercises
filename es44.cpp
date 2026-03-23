#include <iostream>
using namespace std;

void analisiIncassi(double V[], int n, double &totale, int &giornoMax, int &giornoMin) {
    totale = 0;
    giornoMax = 0;
    giornoMin = 0;
    for (int i = 0; i < n; i++) {
        totale += V[i];
        if (V[i] > V[giornoMax]) {
            giornoMax = i;
        }
        if (V[i] < V[giornoMin]) {
            giornoMin = i;
        }
    }
    cout << "Incasso totale: " << totale << " Euro" << endl;
    cout << "Giorno max incasso: " << giornoMax + 1 << " (" << V[giornoMax] << " Euro)" << endl;
    cout << "Giorno min incasso: " << giornoMin + 1 << " (" << V[giornoMin] << " Euro)" << endl;
}

void giorniSopraMedia(double V[], int n) {
    double totale = 0;
    for (int i = 0; i < n; i++) {
        totale += V[i];
    }
    double media = totale / n;
    int contatore = 0;
    for (int i = 0; i < n; i++) {
        if (V[i] > media) {
            contatore++;
        }
    }
    cout << "Giorni sopra la media (" << media << "): " << contatore << endl;
}

void sequenzaCrescente(double V[], int n) {
    int maxSeq = 1;
    int attuale = 1;
    for (int i = 1; i < n; i++) {
        if (V[i] > V[i - 1]) {
            attuale++;
            if (attuale > maxSeq) {
                maxSeq = attuale;
            }
        } else {
            attuale = 1;
        }
    }
    cout << "Sequenza crescente piu' lunga: " << maxSeq << " giorni" << endl;
}

int main() {
    int n = 10;
    double V[10] = {120.50, 150.00, 180.00, 110.00, 130.00, 140.00, 160.00, 90.00, 100.00, 95.00};
    double tot = 0;
    int gMax = 0, gMin = 0;

    analisiIncassi(V, n, tot, gMax, gMin);
    giorniSopraMedia(V, n);
    sequenzaCrescente(V, n);

    return 0;
}