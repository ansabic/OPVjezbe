#include<iostream>
#include <ostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void printMinUsingReccursion(int* niz,int position, int n) {
    int min = niz[position];
    for(int i = position;i < n;i++) {
        if(niz[i] < min){
            return printMinUsingReccursion(niz, i, n);
        }
    }
    cout << "Minimum je " << min << ".\n";
}
void printMaxUsingReccursion(int* niz,int position, int n) {
    int max = niz[position];
    for(int i = position;i < n;i++) {
        if(niz[i] > max){
            return printMaxUsingReccursion(niz, i, n);
        }
    }
    cout << "Maksimum je " << max << ".\n";

}

int main14() {
    int n;
    cout<< "Unesi broj clanova niza: \n";
    cin >> n;
    int niz[n];
    cout << "Unesi niz od " << n << " clanova: \n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    printMinUsingReccursion(niz, 0, n);
    printMaxUsingReccursion(niz, 0, n);
}