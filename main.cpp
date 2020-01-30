#include <iostream>

using namespace std;

/*
Exercice 10
Afficher un comptage de 2 en 2 en commençant par 1 jusqu’à 100.
*/

int main()
{
    int compteur(0);
    //(initialisation; condition; incrementation;)
    for (compteur=1; compteur<103; compteur+=2)
    {
      cout << compteur << endl;
    }

    return 0;
}
