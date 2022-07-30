#include <iostream>
using namespace std;

bool is_prime(int zahl) {
int i;
if (zahl < 2)
    return false;
for(i=2;i*i<=zahl;i++) //for(i=2;i<zahl;i++)
    if(zahl%i==0)
        return false;
return true;
}

int main(){
    int ug, og, mug, mog, luecke, testgrenze,i; mug=ug = 2;
    mog=og = 3; //feste Vorgaben
    luecke = 1;
    cout << "Obere Testgrenze? \n";
    cin >> testgrenze;
    for (i=4; i <= testgrenze; i++) {
        if (is_prime(i)) {
            if ((i) - og > luecke){
                mug = og;
                mog=i;
                ug=og;
                og=i;
                luecke = og - ug;
                cout << mug << ',' << mog << '\t';
            }
            else {
                ug=og; og=i;
            }
        }
    }
}
