#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void scambia(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int partizione(int Vett[], int in, int f) {
    int r = in + rand() % (f - in + 1);
    int p = Vett[r];
    scambia(Vett[r], Vett[f]);
    int i = in;
    for (int j = in; j < f; j++) {
        if (Vett[j] <= p) {
            scambia(Vett[i], Vett[j]);
            i++;
        }
    }
    scambia(Vett[i], Vett[f]);
    return i;
}

int main() {
    srand(time(0));
    int n;
    cout << "Inserisci N (max 100): ";
    cin >> n;
    if (n > 100) n = 100;
    if (n <= 0) return 0;
    
    int Vett[100];
    cout << "Vett generato: ";
    for (int i = 0; i < n; i++) {
        Vett[i] = rand() % 100;
        cout << Vett[i] << " ";
    }
    
    int pos = partizione(Vett, 0, n - 1);
    
    cout << "Pivot scelto: " << Vett[pos] << "Risultato: ";
    for (int i = 0; i < n; i++) {
        if (i == pos) cout << "[" << Vett[i] << "] ";
        else cout << Vett[i] << " ";
    }
    
    return 0;
}