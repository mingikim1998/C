//
//  main.cpp
//  baekjun
//
//  Created by Mingi Kim on 2022/07/07.
//

#include <iostream>
using namespace std;

//int SizeOrder(int weight, int height){
//    int order;
//    for (int i = 0; i <= )
//
//    return order;
//}

int main() {
    int n;
    
    
    cin>> n;
    int people[n][2];
    int order[n];
    
    // initialize order list
    for (int i=0; i<n; i++){
        order[i] = 1;
    }
    
    // get data
    for (int i=0; i<n; i++){
        cin>>people[i][0] >> people[i][1];
    }
    
    // brute force
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (people[i][0]<people[j][0] && people[i][1] < people[j][1]){
                order[i] += 1;
            }
        }
    }
    for (int i =0; i<n; i++){
        cout << order[i] << ' ';
    }
    
    return 0;
}
