#include <iostream>
#include <math.h>

using namespace std;

// Berechnet alle Primzahl von 2 bis N
int main()
{
    // zuletzt gefundene Primzahl
    // Initialisierung mit 1 garantiert, dass die 2 als erstes gefunden wird
    int prim = 1;

    const int N=100;

    // Ziel des Algorithmus:
    // istprim[i] ist true, wenn i eine Primzahl ist, sonst false
    bool istprim[N+1];

    for (int i=0; i<N+1; i++)
    {
        istprim[i] = true;
    }

    istprim[0] = istprim[1] = false;
    do
    {
        // naechste Primzahl suchen:
        // mindestens 1 weiter gehen und dann alle Zahlen ueberspringen, die mit false markiert sind
        // dabei nicht aus dem Feld herrauslaufen
        //Vervollstaendigen Sie das Programm
    }
    while (prim * prim < N+1);

    for(int i= 2;i<N+1;i++)
        if (istprim[i]==true)
           cout << i << '\t';
    cout << "\n";

    return 0;
}


//cctype: fuer evtl. Anwendung von tolower / toupper

using namespace std;

int main (void)
{
    char wort[31];
    int i=0,z=0;

    cout << "Bitte geben Sie ein Wort fuer den Palindromtest ein: Max 30 Zeichen, nur Kleinbuchstaben" << endl;
    cin >> wort;

    //Vervollstaendigen Sie das Programm
    z--; // Da z als Index verwendet werden soll und die Indexzaehlung mit 0 beginnt

    bool palindrom = true; // Variable fuer Palindromtest
    

    
    if (palindrom)
    {
        cout << "Das eingegebene Wort ist ein Palindrom" << endl;
    }
    else cout << "Das eingegebene Wort ist KEIN Palindrom" << endl;
    
    return 0;
}


int main()
{
    // vorgegebene Daten
    int feld[10] = {5,5,6,7,5,9,4,2,2,7};
    int zaehler;
    // Feld, das initial mit true gefuellt ist
    // jede Zahl die als Duplikat erkannt wird, wird mit false markiert
    bool marke[10];

    for (int i=0; i<10; i++)
        marke[i] = true;

    for (int i=0; i<10; i++)
    {
        // Nur Zahlen betrachten, die nicht schon als verbraucht markiert sind
        if (marke [i] == true)
        {
        //vervollstaendigen Sie das Programm
              cout << feld[i] << " " << zaehler << " mal \n";
        }
     }

    return 0;
}


int main ()
{
    int A[5][3], B[3][4], C[5][4];
    int i, j, k;
    // A einlesen
    for ( i = 0; i < 5; i++)
    {
        for ( j=0; j < 3; j++)
        {
            cout << "A["<<i<<"]["<<j<<"] = ";
            cin >> A[i][j];
        }
    }
    
// B einlesen vervollstaendigen
    
// C[i][j] = sum(k=1..3) A[i][k]*B[k][j]
// aessere Schleifen vervollstaendigen

            C[i][j] = 0;
            for (k=0; k<5; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }

// C ausgeben

    return 0;
}


int main ()
{
    int i,j;
    bool stimmt = true;
    int sudoku[9][9] = {7,6,5, 4,1,2, 9,3,8, // richtig geloest!
                        1,8,2, 9,5,3, 4,7,6,
                        3,9,4, 7,6,8, 1,5,2,

                        8,1,6, 3,2,9, 5,4,7,
                        9,4,3, 8,7,5, 6,2,1,
                        2,5,7, 6,4,1, 8,9,3,

                        4,2,9, 1,8,7, 3,6,5,
                        5,3,8, 2,9,6, 7,1,4,
                        6,7,1, 5,3,4, 2,8,9};

    /** Taktik: Fuer jede Zeile im Sudoku wird ein Feld vom Typ bool angelegt und mit 0 (false) beschrieben.
     *  Steht im Sudoku nun eine 8 wird die im Kontrollfeld als vorhanden gekennzeichnet, indem das Element
     *  mit diesem Index (8-1, da Indexzaehlung bei 0 beginnt) auf true gesetzt wird.
     *
     *  Der Index soll nur mit dem Wert true belegt werden, wenn er vorher false war! Andernfalls ist das
     *  Sudoku falsch geloest. Die Kontrollvariable "stimmt" verhindert die weitere Ausfuehrung der Schleifen
     *  in Fehlerfall. Der Index der Fehlerstelle wird festgehalten.*/

    for(i=0; i<9 && stimmt ;i++) // Zeilen testen
    {
        bool kontrolle[9]={0,0,0,0,0,0,0,0,0};

        for(j=0; j<9 && stimmt ;j++)
        {
            if(kontrolle[(sudoku[i][j])-1] == 0)
            {
                kontrolle[(sudoku[i][j])-1] = 1;
                cout << sudoku[i][j] << "\t";
            }
            else stimmt = false;
        }
        cout << endl;
    }
    cout << i << " " << j << endl;

    //Spalten vervollstaendigen


    cout << i << " " << j << endl;

    if(stimmt)
    {
        //Hausaufgabe
        //3x3-Teilmatrizen vervollstaendigen
    }

    cout << i << " " << j << endl;
    /** Auswertung der Kontrollvariable "stimmt" */
    if (stimmt)
    {
        cout << "\\o/ Sudoku ist richtig!" << endl;
    }
    else cout << ":( Sudoku ist falsch!" << endl
              << "fehlerhaft ist die Zahl an Stelle [" << i+1 << "][" << j+1 << "]" << endl;

   return 0;
}

int main ()
{
    int i,j;
    bool stimmt = true;
    int sudoku[9][9] = {7,6,5, 4,1,2, 9,3,8,  //falsch geloest
                        1,8,2, 9,5,3, 4,8,6,
                        3,9,4, 7,6,8, 1,5,2,
                        8,1,6, 3,2,9, 5,4,7,
                        9,4,3, 8,7,5, 6,2,1,
                        2,5,7, 6,4,1, 8,9,3,
                        4,2,9, 1,8,2, 3,6,5,
                        5,3,8, 2,9,6, 3,6,5,
                        6,7,1, 5,3,4, 2,8,9};

    /** Taktik: Fuer jede Zeile im Sudoku wird ein Feld vom Typ bool angelegt und mit 0 (false) beschrieben.
     *  Steht im Sudoku nun eine 8 wird die im Kontrollfeld als vorhanden gekennzeichnet, indem das Element
     *  mit diesem Index (8-1, da Indexzaehlung bei 0 beginnt) auf true gesetzt wird.
     *
     *  Der Index soll nur mit dem Wert true belegt werden, wenn er vorher false war! Andernfalls ist das
     *  Sudoku falsch geloest. Die Kontrollvariable "stimmt" verhindert die weitere Ausfuehrung der Schleifen
     *  in Fehlerfall. Der Index der Fehlerstelle wird festgehalten.*/

    for(i=0; i<9 && stimmt ;i++) // Zeilen testen
    {
        bool kontrolle[9]={0,0,0,0,0,0,0,0,0};

        for(j=0; j<9 && stimmt ;j++)
        {
            if(kontrolle[(sudoku[i][j])-1] == 0)
            {
                kontrolle[(sudoku[i][j])-1] = 1;
                cout << sudoku[i][j] << "\t";
            }
            else stimmt = false;
        }
        cout << endl;
    }
    cout << i << " " << j << endl;

    //Spalten vervollstaendigen


    cout << i << " " << j << endl;

    if(stimmt)
    {
        //Hausaufgabe
        //3x3-Teilmatrizen vervollstaendigen
    }

    cout << i << " " << j << endl;
    /** Auswertung der Kontrollvariable "stimmt" */
    if (stimmt)
    {
        cout << "\\o/ Sudoku ist richtig!" << endl;
    }
    else cout << ":( Sudoku ist falsch!" << endl
              << "fehlerhaft ist die Zahl an Stelle [" << i+1 << "][" << j+1 << "]" << endl;

   return 0;
}

int main ()
{
    int rm[6][15];
    int i, j;

    // erste spalte einlesen
    for (i=0; i<6; i++)
    {
        cout << "erste spalte ["<<i<<"][0] = ";
        cin >> rm[i][0];
    }

    // restliche Matrix fuellen


    // Kontrollausgabe
    cout << "################## Rechteckmatrix ##################" << endl;
    for (i=0; i<6; i++)
    {
        for (j=0; j<15; j++)
        {
            cout << rm[i][j] <<'\t';
        }
        cout << endl;
    }
    cout << "####################################################" << endl << endl;
    // spaltensummen
    int max = 0, sum = 0, index = 0;
    for (i=0; i<6; i++) // 1. potentielles Maximum festlegen
    {
        max += rm[i][0];
    }

    for (j=1; j<15; j++)
    {
        //Vervollstaendigen Sie das Programm

        if (sum > max)
        {
            max = sum;
            index = j;
        }
    }

    cout << "groesste Spaltensumme: " << max << " an Stelle " << index+1 << endl;

    return 0;
}


struct Punkt
{
    float x,y;
};

struct Kreis
{
    Punkt m;    // Mittelpunkt
    float r;    // Radius
};

int main()
{
        // Vervollstaendigen Sie das Programm
    // Variablen fuer den Punkt und den Kreis
    Kreis k;
    Punkt p;
    
    cout << "Koordinaten des Kreismittelpunkts: " << endl;
    
    cout << "Kreisradius: " << endl;
    
    cout << "Koordinaten des Punktes: " << endl;
    
    // Abstand zwischen Kreismittelpunkt und dem Punkt
    
    if (d <= k.r)
    {
        cout << "Punkt liegt im Kreis " << endl;
    }
    else
    {
        cout << "Punkt liegt nicht im Kreis " << endl;
    }
    
    return 0;
}


struct pixel
{
    int rot, gruen, blau;
};

int main()
{
    pixel farbbild[10][10];
    /*
     * Beispieldaten einfuegen
     * Nur zun Test des Programms, Belegung mit Daten war nicht Teil der Aufgabenstellung
    */
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            farbbild[i][j].rot = (i%2) * 255;
            cout.width (4);
            cout << farbbild[i][j].rot;
            farbbild[i][j].gruen = ((j/2) %2) * 255;
            cout.width (4);cout << farbbild[i][j].gruen;
            farbbild[i][j].blau = ((i/2+j) %2) * 255;
            cout.width (4);cout << farbbild[i][j].blau;
        }
        cout << endl;
    }
    
    // Anzahl weisser und schwarzer Punkte zaehlen
    int weiss=0, schwarz=0;
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            //Bestimmung schwarzer und weisser Punkte
        }
    }
    
    cout << "Anzahl weisser Punkte: " << weiss << endl;
    cout << "Anzahl schwarzer Punkte: " << schwarz << endl;
    
    return 0;
}


//Definition Datensatz car

int main (void)
{
    
    ifstream einlesen ("autos.txt"); // oeffnen einer Datei zum Lesen ihrer Inhalte
    if (!einlesen)
    {
        cout << "Datei konnte nicht geoeffnet werden" << endl;
        return 0;
    }
    
    int i;
    
    for (i=0; i<10; i++)
    {
        einlesen >> // Einfügen der Variable die information aufnehmen soll
        einlesen >>
        einlesen >>
        einlesen >>
        einlesen >>
    }
    einlesen.close();
    
    //Sortieren: Alle Jahre von 0 ... 150 versuchen und bei Treffer auto ausgeben
    //
    
    //Lieblingsmarke eingeben
    //alle Autos damit vergleichen und wenn gefunden, dies dem Nutzer mitteilen

    

    return 0;
}


//Definition Datensatz car

int main (void)
{
    
    ifstream einlesen ("autos.txt"); // oeffnen einer Datei zum Lesen ihrer Inhalte
    if (!einlesen)
    {
        cout << "Datei konnte nicht geoeffnet werden" << endl;
        return 0;
    }
    
    int i;
    
    for (i=0; i<10; i++)
    {
        einlesen >> // Einfügen der Variable die information aufnehmen soll
        einlesen >>
        einlesen >>
        einlesen >>
        einlesen >>
    }
    einlesen.close();
    
    //Sortieren: Alle Jahre von 0 ... 150 versuchen und bei Treffer auto ausgeben
    //
    
    //Lieblingsmarke eingeben
    //alle Autos damit vergleichen und wenn gefunden, dies dem Nutzer mitteilen

    

    return 0;
}


// eingabe Datei
golf3
191822
18
75
0
audiA6
36000
2
258
0
Aklasse
111000
10
102
1
bmw3er
87570
6
122
1
jeep
193000
9
320
0
corvettec7
5000
1
455
0
corsa
73000
8
60
1
volvo850
300000
11
144
0
Dodge
60000
4
230
0
PegasoZ102
43200
62
270
0


#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

// Struktur fuer die Daten eines Mitarbeiters
struct Mitarbeiter
{
    char name[31];
    int alter;
    float gehalt;
};

int main()
{
    fstream input ("mitarbeiter.txt", fstream::in);

    if (!input)
    {
        cout << "Datei nicht geoeffnet" << endl;
        return 0;
    }
    // Anzahl der Mitarbeiter
    int anzahl=0;

    // Feld das die Daten von bis zu 30 Mitarbeitern speichern kann
    // Hinweis: wenn der Betrieb weniger als 30 Mitarbeiter hat,
    // ist nur ein Teil des Feldes mit sinnvollen Daten gefuellt
    Mitarbeiter personal[30];

    while (!input.eof())
    {
        input >> personal[anzahl].name;
        input >> personal[anzahl].alter;
        input >> personal[anzahl].gehalt;
        personal[anzahl].gehalt *=12;
        anzahl++;
    }

    input.close();

    // Schleife die solange laeuft bis der Nutzer 'x' eingibt
    char eingabe='0';
    while (eingabe != 'x')
    {
        // Menue ausgeben
        cout << "\n";
        cout << "1: Mitarbeiter anzeigen " << endl;
        cout << "2: Altersdurchschnitt anzeigen " << endl;
        cout << "3: Mitarbeiter einstellen " << endl;
        cout << "4: Gehaltserhoehung " << endl;
        cout << "5: Topverdiener anzeigen " << endl;
        cout << "6: Mitarbeiter entlassen " << endl;
        cout << "x: Programm beenden " << endl;

        // Befehl von Nutzer einlesen
        cin >> eingabe;
        cout << endl;

        // Bearbeiten des Befehls
        switch (eingabe)
        {
            case '1':
                        if (anzahl)
                            {
                                //Ausgabe der Mitarbeiter
                            }
                        else cout << "Keine MA eingestellt" << endl;
                    break;
            case '2':
                        if (anzahl)
                        {
                            //Altersurchschnitt berechnen
                        }
                        else cout << "Keine MA eingestellt" << endl;
                    break;
            case '3':
                        // Mitarbeiter einstellen
                        // pruefen, dass Maximalanzahl noch nicht erreicht
                        if (anzahl<30)
                        {
                            // die erste Position im Feld an der noch keine Daten stehen hat gerade den Index anzahl

                            //Daten eingeben

                            // Anzahl Mitarbeiter aktualisieren
                            anzahl++;
                        }
                        else cout << "Maximale Anzahl Mitarbeiter bereits erreicht!" << endl;
                    break;

            case '4':
                        if (anzahl)
                        {
                            //Gehaltserhoehung
                        }
                        else cout << "Keine MA eingestellt" << endl;
                    break;

            case '5':
                        if (anzahl)
                        {
                            //Durchschnitt berechnen und dann die Mitarbeiter ermitteln, die 20 % mehr als
                            //der Durchschnitt verdienen
                        }
                        else cout << "Keine MA eingestellt" << endl;
                    break;

            case '6':
                        if (anzahl)
                        {
                            //Mitarbeiterdaten (Name) eingeben
                            //diesen Mitarbeiter suchen
                            //wenn gefunden: alle Mitarbeiter die rechts vom Betroffenen stehen, eine Stelle nach
                            //links, anzahl--
                            //wenn nicht gefunden: Nachricht ausgeben
                        }
                        else cout << "Keine MA eingestellt." << endl;
                     break;

            case 'x': cout << "Programm wird beendet." << endl;
                      break;
            default: cout << "Fehleingabe! Bitte Auswahl widerholen." << endl;
        }
    }
    return 0;
}


// eingabe Datei

Alfa 25 2000
Bravo 30 2500
Charlie 35 2500
Delta 52 3500
Echo 40 3000
Foxtrot 18 1500
Golf 56 3500
Hotel 47 3500
India 29 2500
Juliett 60 4000
Kilo 31 2500
Lima 48 3500
Mike 42 3000
November 36 2500
Oscar 32 2500
Papa 29 2000
Quebec 57 3600
Romeo 16 800
Sierra 22 1000
Tango 34 2500
Uniform 58 3500
Victor 24 1500
Whiskey 28 2000
x-Ray 21 1000
Yankee 33 2500
Zulu 44 3000


int hofstadter_conway(int n)
{
  if (n <= 2)
     return 1;
  //Vervollstaendigen Sie die Loesung
}

int main()
{
  int i, anz = 0;
  
  for(i=1; i <=50; i++)
   {
     cout << hofstadter_conway(i) << '\t';
     anz++;
     if (anz % 7 == 0)
        cout << '\n';
   }
   cout << '\n';
}


int lego(int a)
{

}

int main (void)
{
    int a, anz = 0;
    cout << "Bitte Hoehe der Treppe eingeben" << endl;
    cin >> a;
    
    cout << "Die Treppe besteht aus " << lego(a) << " Legosteinen." << endl;
    return 0;
}

int fak (int n )
{
}

int main ()
{
    int zahl;
    int erg;
    
    cout << "Geben Sie eine Zahl ein:" ;
    cin >> zahl;
    
    erg = fak(zahl);
    cout << "Fakultaet von " << zahl << " ist:" << erg << endl;
    
    return 0 ;
}

int ack (int m, int n)
{
}

int main ()
{
    int M, N;
    cout << "M = ";
    cin >> M;
    cout << "N = ";
    cin >> N;
    cout << "ack ( "  << M << ", " << N << " ) = " << ack(M,N) << endl;
    return 0;
}



// N ueber K
int bino (int n, int k)
{
}

// male das pascalsche dreieck mittels bino(n,k);
int main ()
{
    int n, k, i;
    cout << "n = ";
    cin>>n;

    cout.width(3);
    for ( i=0; i<=n; i++)
    {
        for ( k=i; k<n; k++) cout << " ";
        for ( k=0; k<=i; k++) cout << bino(i, k) << " ";
        cout << endl;
    }

    return 0;
}


int rehe (int jahr)
{

}

int main ()
{
    for ( int i=1; i<=10; i++)
        cout << i << ". Jahr | " << rehe (i) << " Rehe" << endl;
    return 0;
}


int anz_pflanzen (int tag, int init)
{

}

int main ()
{

    int anz_p_init;
    cout << "Anzahl Pflanzen am Tag 1: ";
    cin >> anz_p_init;

    int max = anz_pflanzen(1, anz_p_init), d=1;

    for (int tag=1; tag<=22; tag++)
    {
        cout << "Anzahl derder Pflanzen am Tag " << tag
             << ": " << anz_pflanzen (tag, anz_p_init) << endl;

        int anz_pf_heute = anz_pflanzen(tag, anz_p_init);

        if (anz_pf_heute > max)
        {
            max = anz_pf_heute;
            d = tag;
        }
    }

    cout << "Die meisten Pflanzen(" << max << ") mit " << anz_p_init << " Pflanzen am Tag 1 gab es an Tag " << d << endl;



    return 0;
}


int hofstadter_conway(int n)
{
  if (n <= 2)
     return 1;
  //Vervollstaendigen Sie die Loesung
}

int main()
{
  int i, anz = 0;
  
  for(i=1; i <=50; i++)
   {
     cout << hofstadter_conway(i) << '\t';
     anz++;
     if (anz % 7 == 0)
        cout << '\n';
   }
   cout << '\n';
}



