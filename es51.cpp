#include <iostream>
using namespace std;

int ricercaSequenziale(int arr[], int n, int target) {
    int risp;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            risp= i;
        }
        if (arr[i] > target) {
            risp= -1; 
        }
    }
    return risp;
}

int main() {
    int numeri[] = {10, 20, 30, 40, 50};
    int dimensione = 5;
    int cerca = 30;

    int indice = ricercaSequenziale(numeri, dimensione, cerca);

    if (indice != -1)
        cout << indice << endl;
    else
        cout << -1 << endl;

    return 0;
}
