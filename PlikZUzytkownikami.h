#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

#ifndef PLIKZUZYTKOWNIKAMI.h
#define PLIKZUZYTKOWNIKAMI.h

using namespace std;

class PlikZuzytkownikami
{
    const string nazwaPlikuZUzytkownikami;
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikZuzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI) : nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI) {};
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    //void wczytajUzytkownikowZPliku(vector <Uzytkownik> &uzytkownicy);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
};

#endif // PLIKZUZYTKOWNIKAMI
