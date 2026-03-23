#include <iostream>

using namespace std;

void inserimentoDati(float T[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> T[i];
    }
}

void calcolaStatistiche(float T[], int n, float &media, float &max, float &min) {
    float somma = 0;
    max = T[0];
    min = T[0];

    for (int i = 0; i < n; i++) {
        somma += T[i];
        if (T[i] > max) max = T[i];
        if (T[i] < min) min = T[i];
    }
    media = somma / n;
}

int contaGiorniMiti(float T[], int n) {
    int contatore = 0;
    for (int i = 0; i < n; i++) {
        if (T[i] >= 15 && T[i] <= 25) {
            contatore++;
        }
    }
    return contatore;
}

void stampaRisultati(float media, float max, float min, int contatore) {
    cout << media << endl;
    cout << max << endl;
    cout << min << endl;
    cout << contatore << endl;
}

int main() {
    const int n = 10;
    float T[n];
    float media, massima, minima;
    int giorniMiti;

    inserimentoDati(T, n);
    calcolaStatistiche(T, n, media, massima, minima);
    giorniMiti = contaGiorniMiti(T, n);
    stampaRisultati(media, massima, minima, giorniMiti);

    return 0;
}