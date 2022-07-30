#include <stdio.h>
#include <iostream>
using namespace std;

int ulam_r(int n){
    cout << n << ','; if (n==1)
    return 1;
    if ((n%2) == 0) return 1 + ulam_r(n/2);
    return 1 + ulam_r(3*n +1);
}


void rekursive(){
    int zahl,l;
    cout << "Ulam-Folge welcher Zahl?\n";
    cin >> zahl;
    l=ulam_r(zahl);
    cout << "\nDie Laenge der Ulam-Folge fuer n =" << zahl << " betraegt: " << l << '\n';
}
