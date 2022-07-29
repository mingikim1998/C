//
//  2750.cpp
//  baekjun
//
//  Created by Mingi Kim on 2022/07/07.
//

#include <iostream>
using namespace std;

int * InsertionSort (int *list, int n){
    for (int i=1; i<n-1 ; i++){
        int key = list[i];
        int j = i-1;
        while (j>=0 && list[j]>key){
            list[j+1] = list[j];
            j--;
        }
        list[j+1] = key;
    }
    
    return list;
}

int main(){
    int n;
    cin>>n;
    int list[n];
    
    for (int i=0; i<n; i++){
        cin>> list[i];
    }
    
    InsertionSort(list, n);
    for (int i=0; i<n; i++){
        cout<< list[i]<< "\n";
    }
    
    return 0;
}
