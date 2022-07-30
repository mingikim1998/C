#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    const int m = 10;
    const int n = 10;
    int i, j;
    int matrix[m][n];
    int senke_matrix[m][n];
    char fname[50];
    cout << "Dateiname?\n";
    cin >> fname;
    ifstream fin(fname);
    if (!fin){
        cout << "Datei nicht zu öffnen\n";
        return 0;
    }
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            if (i==0){
                switch(j){
                    case 0: if ((matrix[i][j] < matrix[i][j+1]) && (matrix[i][j] < matrix[i+1][j]) && (matrix[i][j] < matrix[i+1][j+1])){
                        senke_matrix[i][j] = i*j;
                    }
                        break;
                        
                    case n-1: if ((matrix[i][j] < matrix[i][j-1]) && (matrix[i][j] < matrix[i+1][j]) && (matrix[i][j] < matrix[i+1][j-1])){
                        senke_matrix[i][j] = i*j;
                    }
                        break;
                        
                    default: if ((matrix[i][j] < matrix[i][j-1]) && (matrix[i][j] < matrix[i][j+1]) && (matrix[i][j] < matrix[i+1][j]) && (matrix[i][j] < matrix[i+1][j-1]) && (matrix[i][j] < matrix[i+1][j+1])){
                        senke_matrix[i][j] = i*j;
                    }
                        break;
                }
            }
            else {
                int count = 0;
                switch (j) {
                    case 0:
                        break;
                        
                    case n-1:
                        break;
                        
                    default:
                        if ((matrix[i][j] < matrix[i-1][j])&&(matrix[i][j] < matrix[i-1][j-1]) && (matrix[i][j] < matrix[i-1][j+1]) && (matrix[i][j] < matrix[i][j-1]) && (matrix[i][j] < matrix[i][j+1]) && (matrix[i][j] < matrix[i+1][j]) && (matrix[i][j] < matrix[i+1][j-1]) && (matrix[i][j] < matrix[i+1][j+1])){
                            
                            senke_matrix[i][j] = i*j;
                        }
                        break;
                }
            }
        }
    }
    fin.close();
    return 0;
}
