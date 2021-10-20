#include<iostream>
#include <ostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void printMinAndMax(int* niz, int n) {
    int tempMin = niz[0];
    int tempMax = niz[0];
    for(int i = 0; i < n;i++){
        if(niz[i] > tempMax){
            tempMax = niz[i];
        }
        if(niz[i] < tempMin){
            tempMin = niz[n];
        }
    }
    cout << "\n Minimum je "<< tempMin <<" a maksimum je " <<  tempMax << "!\n";
}

int main() {
    int n;
    cout<< "Unesi broj clanova niza: \n";
    cin >> n;
    int niz[n];
    cout << "Unesi niz od " << n << " clanova: \n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    printMinAndMax(niz, n);
}