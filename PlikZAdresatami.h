#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
class AdresatManager;

using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;
    //vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;

    bool czyPlikJestPusty();
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:

    PlikZAdresatami(string NAZWA_PLIKU_Z_ADRESATAMI) : nazwaPlikuZAdresatami(NAZWA_PLIKU_Z_ADRESATAMI)
    {
        idOstatniegoAdresata = 0;
    };
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    vector <Adresat> wczytajAdresatowZPliku();
    int pobierzIdOstatniegoAdresata();

};

#endif
