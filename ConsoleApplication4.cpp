
#include <iostream>
using namespace std;

int PGCD(int nombre1, int nombre2);
int quantite_de_fractions(int nombre1, int nombre2);



int main()
{
    char rep ;

    do {

    
    cout << "calculer le PGCD." << endl;
    cout << "-----------------------------" << endl;

    int nombre11, nombre12;
    cout << "Enter deux nombres  differnets de zero svp:\t";
    cin >> nombre11 >> nombre12;
   
    quantite_de_fractions(nombre11, nombre12);

    cout << "-----------------------------" << endl;
    cout << "voulez vous contenu" << endl;
    cin >> rep;
} while (rep != 'n' && rep != 'N');


return 0;
}













int quantite_de_fractions(int nombre1, int nombre2)
{
    int N1, N2;
   
    N1 = nombre1;
    N2 = nombre2;
    

    
        while (nombre1 == 0 || nombre2 == 0)
        {
            cout << "Enter deux nombres  differnets de zero svp:\t";
            cin >> nombre1 >> nombre2;
        }
        cout << endl;
        cout << "Le Plus Grand Commun Diviseur (PGCD) est:"<<PGCD(nombre1, nombre2) << endl;
        
        
        
   
    return nombre1;
    
}






int PGCD(int nombre1, int nombre2)
{
    int rest;
    if (nombre1 < 0) nombre1 = -nombre1;
    if (nombre2 < 0) nombre2 = -nombre2;

   
   do {

       if(nombre1>nombre2)
       {
           rest = nombre1 - nombre2;
           nombre1 = rest;


       }
       else if (nombre2 > nombre1)
       {
           rest = nombre2 - nombre1;
           nombre2 = rest;


       }

   } while (nombre1!= nombre2);
   return nombre1;
   
}

 
