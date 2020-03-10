
#include <iostream>
using namespace std;
int PGCD(int nombre1, int nombre2);

int main()
{
    cout << "calculer le PGCD." << endl;
    cout << "-----------------------------" << endl;
    int nombre1,nombre2;
    do {
    cout << "Enter deux nombres  differents de zero svp:\t";
    cin >> nombre1 >>nombre2;
    } while (nombre1 == 0 || nombre2 ==0);
    cout << endl;
    cout << PGCD( nombre1,  nombre2) <<endl;
    return 0;
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
 
