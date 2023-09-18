#include <iostream>
using namespace std;

int main()
{ int n;
  int uno, dos, tres, cuatro, cinco, seis;
  int policias, patrulleros, ambulancias;
  int numero;

   srand(time(nullptr));
   cout << "Numero de dias: ";
   cin >> n;
   cout << "\n";
   for(int nd=1; nd<=n; nd++)
   {
     numero = rand();
     while( numero < 100000 or numero > 999999)
        numero = rand();
     uno =  numero % 10;
     dos =  numero /10 % 10;
     tres =  numero / 100 % 10;
     cuatro = numero /1000 % 10;
     cinco =  numero / 10000 % 10;
     seis =  numero / 100000;
     policias = uno + seis;
     patrulleros = dos + cinco;
     ambulancias = tres + cuatro;
     cout << nd << ". " << numero << " " << "Policias: " << policias << " Patrulleros: " << patrulleros << " Ambulancias: " << ambulancias << "\n";
   }


  return 0;
}
