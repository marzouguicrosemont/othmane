#include <iostream>
using namespace std;

int PGCD(int nombre1, int nombre2);

int quantite_de_fractions(int nombre1, int nombre2);

void simplifie(int x, int y);

int main()
{
    int nombre11, nombre12, nombre_fraction;
    int k = 0;
   

   
    

    


        cout << "calculer le PGCD." << endl;
        cout << "-----------------------------" << endl;
       

       
        do{
            cout << "Enter nombre_fraction superieur a zero svp:\t";
            cin >> nombre_fraction;
        } while (nombre_fraction <= 0);
        int h = nombre_fraction*2;
        int t['h'];

        for(int  i=0;i< nombre_fraction;i++)

        {
        
        cout << "Entrez le Numerateur et Denominateur differents de zero ou un caractere pour quitter svp:\t";
        cin >> nombre11 >> nombre12;
        if (cin.fail()) {
            cout << "by by" << endl;  goto ss;

        } 
        


        quantite_de_fractions( nombre11,  nombre12);

        cout << "-----------------------------" << endl;
        
        t[k] = nombre11;
        t[k+1] = nombre12;
       
        simplifie(t[k], t[k+1]);
        k=k+2;
        cout << "-----------------------------" << endl;
        
        }
        for(int j=0;j< nombre_fraction * 2;j++)
        {
            simplifie(t[j], t[j + 1]);
            j=j+2;
        }

ss:;
    return 0;
}













int quantite_de_fractions(int nombre1, int nombre2)
{
   


    while (nombre1 == 0 || nombre2 == 0)
    {
        cout << "Enter deux nombres  differnets de zero svp:\t";
        cin >> nombre1 >> nombre2;
    }
    cout << endl;
    cout << "Le Plus Grand Commun Diviseur (PGCD) est:" << PGCD(nombre1, nombre2) << endl;




    return nombre1,nombre2;

}






int PGCD(int nombre1, int nombre2)
{
   
    int rest;
    if (nombre1 < 0) nombre1 = -nombre1;
    if (nombre2 < 0) nombre2 = -nombre2;
   
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
    cout <<x << "/" << y << ">>>" << x / PGCD(x, y) << "/" << y / PGCD(x, y) << endl;


}
