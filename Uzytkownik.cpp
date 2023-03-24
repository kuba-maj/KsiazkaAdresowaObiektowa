#include "Uzytkownik.h"
#include "UzytkownikManager.h"

void Uzytkownik::ustawId(int noweId)
{
    if (noweId >= 0)
    id = noweId;
}

void Uzytkownik::ustawLogin(string nowyLogin)
{
    login = nowyLogin;
}

void Uzytkownik::ustawHaslo(string noweHaslo)
{
    haslo = noweHaslo;
}

int Uzytkownik::pobierzId()
{
    return id;
}

string Uzytkownik::pobierzLogin()
{
    return login;
}

string Uzytkownik::pobierzHaslo()
{
    return haslo;
}

/*int Uzytkownik::logowanie()
{
    Uzytkownik uzytkownik;

    cout << endl << "Podaj login: ";
    login = wczytajLinie();

    vector <Uzytkownik>::iterator itr = pobierzUzytkownika().begin();
    while (itr != pobierzUzytkownika().end())
    {
        if (itr -> login == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = wczytajLinie();

                if (itr -> haslo == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    return itr -> id;
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
        itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return 0;
}

string Uzytkownik::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}*/
