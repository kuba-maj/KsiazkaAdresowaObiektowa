#include <iostream>
#include "ObiektowaKsiazkaAdresowa.02.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa;
    for (int i = 0; i < 2; i++)
    {
      ksiazkaAdresowa.rejestracjaUzytkownika();
    }
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
