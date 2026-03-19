#include <iostream>
using namespace std;

void leggiTempo(int &h, int &m, int &s, int numero) {
    cout << "--- Inserimento Orario " << numero << " ---" << endl;
    
    h = -1;
    while (h < 0 || h > 24) {
        cout << "Ore (0-24): ";
        cin >> h;
    }

    m = -1;
    while (m < 0 || m > 59) {
        cout << "Minuti (0-59): ";
        cin >> m;
    }

    s = -1;
    while (s < 0 || s > 59) {
        cout << "Secondi (0-59): ";
        cin >> s;
    }
    cout << endl;
}

long convertiInSecondi(int h, int m, int s) {
    return ((long)h * 3600) + ((long)m * 60) + s;
}

void confrontaEStampa(long t1, long t2) {
    if (t1 > t2) {
        cout << "Il primo intervallo di tempo e' maggiore." << endl;
    } 
    else if (t2 > t1) {
        cout << "Il secondo intervallo di tempo e' maggiore." << endl;
    } 
    else {
        cout << "I due intervalli di tempo sono uguali." << endl;
    }
}

int main() {
    int h1, m1, s1, h2, m2, s2;
    long tot1, tot2;

    leggiTempo(h1, m1, s1, 1);
    leggiTempo(h2, m2, s2, 2);

    tot1 = convertiInSecondi(h1, m1, s1);
    tot2 = convertiInSecondi(h2, m2, s2);

    confrontaEStampa(tot1, tot2);

    return 0;
}