#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa;
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    for (int i = 0; i < 2; i++)
    {
      ksiazkaAdresowa.rejestracjaUzytkownika();
    }
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
