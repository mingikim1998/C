#include <stdio.h>
#include <iostream>

using namespace std;

struct student {
char Name[40]; char Vorname[20];
int cp[10]; //10 subjects
float noten[10];
};

int main(){
    int i = 0;
    int g_ds = 0;
    while (i<1000 && strcmp (studenten_fakultaet[i].name,"Ende") != 0){
        cout << studenten_fakultaet[i].name << '\t' << studenten_fakultaet[i].vorname << '\t';
        int ds = 0;
        int cp_s = 0;
        for (int j = 0;j<10;j++){
            if(studenten_fakultaet[i].noten[j]!=0)
            {
            cp_s += studenten_fakultaet[i].cp[j];
            ds += studenten_fakultaet[i].cp[j]*studenten_fakultaet[i].noten[j];
            }
        }
        if (cp_s != 0) //schon Noten vergeben
        ds=ds/cp_s; cout << ds << '\n'; g_ds += ds;
        i++;
    }
    
    if (i>0) {
        cout << "Gesamtdurchschnitt: " << g_ds/i << '\n';
    }
    else cout << "Keine Studenten\n";
}
