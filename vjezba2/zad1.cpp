#include <iostream>

using namespace std;

int *&minMax(int *&niz, int n) {
    int min = niz[0];
    int max = niz[0];
    for (int i = 1; i < n; i++) {
        if (niz[i] > max)
            max = niz[i];
        if (niz[i] < min)
            min = niz[i];
    }
    niz[0] = min;
    niz[1] = max;
    return niz;

}

int main21() {
    int n;
    cout << "Unesi broj clanova niza:" << endl;
    cin >> n;
    int *niz = new int[n];
    for (int i = 0; i < n; i++)
        cin >> niz[i];
    int *&result = minMax(niz, n);
    cout << result[0] << endl;
    cout << result[1] << endl;
}

