#include <iostream>
using namespace std;


int craft (int anz_h, int anz_f, int anz_e)
{
    if (anz_h>=8 && anz_f>=10 && anz_e>=8)
    {
        //vervollstaendigen Sie die Loesung
    }

        //vervollstaendigen Sie die Loesung

}

bool verkauf (int kram, int angebot)
{
    if (angebot/kram >= 128) return true;
    return false;
}

int main(void)
{
    int anz_h, anz_f, anz_e;

    cout << "Anzahl Haeute?";
    cin >> anz_h;
    cout << "Anzahl Federn?";
    cin >> anz_f;
    cout << "Anzahl Essenzen?";
    cin >> anz_e;
    
    int kram = craft (anz_h, anz_f, anz_e);
    cout << "Der Magier erzeugt " << kram << " Items" << endl;

    if (kram)
    {
        int angebot;
        cout << "Bitte Angebot fuer " << kram << " Gegenstaende ageben" << endl;
        cin >> angebot;

        if(verkauf(kram, angebot))
        {
            cout << "Angebot angenommen" << endl;
        }
        else cout << "Angebot NICHT angenommen" << endl;
    }
    else cout << "Keine Gegenstaende vorhanden!" << endl;

    return 0;
}


#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
    char filename[50];
    cout << "Bitte Dateiname der Mail eingeben." << endl;
    cin >> filename;

    ifstream in (filename);
    
    if (!in)
    {
        cout << "Datei " << filename << " nicht geoeffnet" << endl;
        return 0;
    }
    
    char word[100];
    in >> word;

    char filename_out[100];
    char name [50];
    char topic[50];
    bool found = false;

    while (!in >> word && !found)
    {
        //Wort suchen und Text generieren
    }

    in.close();

    if (found)
    {
        ofstream out (filename_out);
        if (!out)
        {
            cout << "Datei " << filename_out << " nicht angelegt" << endl;
            return 0;
        }
    }
    else cout << "No buzzword detected" << endl;
    return 0;
}





#include <iostream>
#include <fstream>
using namespace std;

// Struktur fuer die Daten eines Student
struct student
{
    char stg;
    float pkt;
};

int main()
{
    ifstream in ("student.txt");

    if (!in)
    {
        cout << "Datei nicht geoeffnet" << endl;
        return 0;
    }

    student tn[400];
    //Initialisieren
    for (int i=0; i<400; i++)
    {
    }

    int anz_tn = 0, pkt_ges = 0, anz_tn_best=0;
    cout << "Gesamtanzahl zu erreichender Punkte in Klausur?" << endl;
    cin >> pkt_ges;
    float pkt_bestanden = pkt_ges/100.0*40.0;

    in >> anz_tn;
    for (int i=0; i<anz_tn; i++)
    {
        //Vervollstaendigen Sie die Loesung
    }

    if (anz_tn_best)
        cout << float(anz_tn_best)/anz_tn*100.0 << "% der Teilnehmer haben die Klausur bestanden." << endl;
    else cout << "Kein Teilnehmer hat die Klausur bestanden." << endl;

    char stgs[10];
    int anz_stgs=0;
    int anz_tn_in_stgs[10];
    float erg_stgs[10];
    for (int i=0; i<10; i++)
    {
        stgs[i]= '_';
        anz_tn_in_stgs[i]=0;
        erg_stgs[i]=0;
    }

    for (int i=0; i<anz_tn; i++)
    {
        bool found = false;
        for (int j=0; j<10 && !found; j++)
        {
        }
        if (!found) // wenn nicht im feld enthalten
        {
        }
    }


    for (int i=0; i<anz_tn; i++)
    {
        for (int j=0; j<anz_stgs; j++)
        {
            if (tn[i].stg == stgs[j]) // stg ermitteln
            {
                erg_stgs[j] += tn[i].pkt; // durch tn erreichte pkt addieren
            }
        }
    }

    int max = 0;
    int index_max=0;
    for (int j=0; j<anz_stgs; j++)
    {
    }
    cout << "Bester Stg: " << stgs[index_max] << endl;
    return 0;
}


#include <iostream>
#include <fstream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

struct data
{
    char frage[2000];
    char antwort[4][100];
    int schwierigkeit;
    int id;
};

int choose_quest (int anz)
{
    /* initialize random seed: */
    return rand() % anz +1;
}

int choose_answer ()
{
    /* initialize random seed: */
    return rand() % 4;
}

int main()
{
    srand (time(NULL));
    
    data fragen[1000];
    int anz_fragen=0;
    ifstream in ("fragen.txt");
    if (!in)
    {
        cout << "Datei mit Fragen konnte nicht geoeffnet werden." << endl;
        return 0;
    }

    int i=0;
    in >> fragen[i].id;

    while (fragen[i].id)
    {
        in >> fragen[i].frage;
        in >> fragen[i].antwort[0];
        in >> fragen[i].antwort[1];
        in >> fragen[i].antwort[2];
        in >> fragen[i].antwort[3];
        in >> fragen[i].schwierigkeit;
        i++;
        anz_fragen++;
        in >> fragen[i].id;
    }
    cout << "Zur Beantwortung der Frage die Nummer der richtigen Antwort eingeben." << endl;
    cout << "Spiel beginnt!" << endl << endl;
    bool right=true;
    int anz=1;
    bool used[1000];
    for (i=0; i<1000; i++) used[i]=false;

    while(anz<=6 && right)
    {
        cout << "Frage " << anz << ":" << endl << endl;
        int f;
        bool use=false;
        while (!use)
        {
            f = choose_quest(anz_fragen);
            for (i=0; i<100000; i++) i=i;
            
            if (used[f-1] == false && ((fragen[f-1].schwierigkeit*2)-1 == anz || fragen[f-1].schwierigkeit*2 == anz))
            {
                use = true;
                used[f-1] = true;
            }
        }

        cout << fragen[f-1].frage << endl;

        int answer[4];
        for (i=0; i<4; i++) answer[i]=-1;
        int x=0;
        int a;
        while (x<4)
        {
            a = choose_answer();
            for (i=0; i<100000; i++) i=i;
            bool found = false;
            for (i=0; i<4 && !found; i++)
                if(answer[i] == a) found = true;
            if (!found)
            {
                answer[x] = a;
                x++;
            }
        }

        for (i=0; i<4; i++)
            cout << i+1 << " - " << fragen[f-1].antwort[answer[i]] << endl;


        int kandidatenantwort;
        cin >> kandidatenantwort;

        if(answer[kandidatenantwort-1] == 0)
            cout << "Bravo ... Richtige Antwort :)" << endl << "Weiter mit naechster Frage" << endl;
        else
        {
            cout << "Leider falsch :( Spiel endet." << endl;
            return 0;
        }
        anz++;
    }
    cout << "Sie haben alle Fragen richtig beantwortet!" << endl;

    /*
    for (i=0; i<anz_fragen; i++)
    {
        cout << fragen[i].id << " | " << fragen[i].frage << " >> ";
        for (int j=0; j<4; j++) cout << fragen[i].antwort[j] << " - ";
        cout << fragen[i].schwierigkeit;
        cout << endl << endl;
    }*/
    return 0;
}





// fragen für Spielshow
1 Wie_viele_Zehen_hat_ein_Hund_an_einer_Pfote? 4 3 5 6 1
2 In_welchem_Monat_werden_Jungtiere_von_Eichhoernchen_geboren? Februar Januar Maerz April 2
3 Eine_Seekatze_ist_ein/e... Fisch Nagetier Vogel Schlange 1
4 Wie_viele_aktive_Zaehne_hat_ein_weisser_Hai? 43-54 25-36 17-28 31-42 3
5 Welches_ist_keine_Pinguinart? Hutpinguin Brillenpinguin Grosspinguin Zwergpinguin 3
6 Welche_Art_zaehlt_nicht_zur_Gattung_der-Grosskatzen? Puma Loewe Tiger Leopard 2


// student txt für prüfung
29
i 55
i 32
i 42
i 41
i 37
i 28
i 30
i 52
i 22
i 32
i 11
i 17
i 58
i 20
m 29
m 60
m 52
m 36
m 8
m 47
m 43
m 29
m 48
t 54
t 32
t 26
t 28
t 37
t 19




