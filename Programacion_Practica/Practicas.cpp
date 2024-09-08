#include <iostream>
//Para hacer calculos matematicos utilizamos cmath
#include <cmath>
#include <string> 

using namespace std;

int main()
{
   int persona,pizzas,pizza = 8,trozos,np,ntp,nts;
   cout << "Ingrese el numero de personas: ";
   cin >> personas;
   cout << "Cuantas pizzas desea?: ";
   cin >>pizzas;
   //Operacion
   np = personas * 8;
   ntp = np / personas;
   nts =np -ntp * personas;
   cout << "El numero de trozos por persona es de: " <<ntp << "Por persona\n";
   cout << "Las porciones que sobran son de: \n"<<nts;

   return 0;

   

}
