#include <iostream>
using namespace std;
int main() {
    srand(time(0));
    int i, j, n, t, coppie, cornice;
    cout << "inserisci il numero di listelli" << endl;
    cin >> n;
    int l[n];
    i = 0;
    while (i <= n - 1) {
        l[i] = rand() % 7 + 4;
        i = i + 1;
    }
    bool scambio;
    i = 0;
    scambio = true;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (l[j] > l[j + 1]) {
                t = l[j];
                l[j] = l[j + 1];
                l[j + 1] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i <= n - 1) {
        cout << "le lunghezze dei listelli sono " << l[i] << " cm" << endl;
        i = i + 1;
    }
    i = 0;
    coppie = 0;
    while (i <= n - 1) {
        j = i + 1;
        while (j <= n - 1 && l[i] != 0) {
            if (l[i] == l[j]) {
                coppie = coppie + 1;
                cout << "è stata trovata la coppia di " << l[i] << " cm" << endl;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    cornice = (int) ((double) coppie / 2);
    cout << "le coppie che si possono produrre sono " << cornice << endl;
}