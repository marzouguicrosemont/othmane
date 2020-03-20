
#include <iostream>
using namespace std;


int PGCD(int nombre1, int nombre2);

void simplifie(int x, int y);

void affichage(int tab[], int taille);
int quantitefraction();


int main()
{
    int nombre11, nombre12;
    int k = 0;
    int f;


    cout << "Calcul du Plus Grand Commun  diviseur de deux nombres entiers naturels non nuls \n" << endl;
    cout << "-----------------------------" << endl;




    system("pause");

   

    cout << "-----------------------------" << endl;
    f = quantitefration();
    int h = f * 2;
    int t['h'];

    cout << "-----------------------------" << endl;

    for (int i = 0; i < f; i++)

    {
        do {
            cout << "Entrez le Numerateur et Denominateur differents de zero ou un caractere pour quitter svp:\t";
            cin >> nombre11 >> nombre12;
            cout << "\a";
            if (cin.fail()) {
                cout << "by by" << endl;  goto ss;

            }
        } while (nombre11 == 0 || nombre12 == 0);

        nombre11 = abs(nombre11);
        nombre12 = abs(nombre12);

        cout << "Le Plus Grand Commun Diviseur (PGCD) est:" << PGCD(nombre11, nombre12) << endl;

        cout << "-----------------------------" << endl;

        t[k] = nombre11;
        t[k + 1] = nombre12;

        simplifie(t[k], t[k + 1]);
        k = k + 2;


        cout << "-----------------------------" << endl;

    }

    affichage(t, h);




ss:;
    return 0;
}






int quantitefraction()

{
    int nombre_fraction;

      do {
        cout << "Enter nombre_fraction superieur a zero svp:\t";
        cin >> nombre_fraction;
        cout << "\a";
    } while (nombre_fraction <= 0);

    return nombre_fraction;

}





int PGCD(int nombre1, int nombre2)
{

    int rest;

    do {

        if (nombre1 > nombre2)
        {
            rest = nombre1 - nombre2;
            nombre1 = rest;


        }
        else if (nombre2 > nombre1)
        {
            rest = nombre2 - nombre1;
            nombre2 = rest;


        }

    } while (nombre1 != nombre2);


    return nombre1;
}


void simplifie(int x, int y)
{
    cout << x << "/" << y << ">>>" << x / PGCD(x, y) << "/" << y / PGCD(x, y) << endl;


}


void affichage(int tab[], int taille)
{
    for (int j = 0; j < taille; j++)
    {
        simplifie(tab[j], tab[j + 1]);
        j = j + 1;
    }

}
