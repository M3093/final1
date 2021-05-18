//Programa de facturación// 
#include <iostream>
using namespace std;

// Declaración de variables// 
  int consumo;
  char palabra [50]; 
  int horas;
  int watts;

int main() 
 
{
   cout << " Nombre del dispositivo IOT: " <<endl;
   cin>>palabra;
   cout<<"Tipo: "<<endl;
   cin>>palabra;
   cout<<"Digite consumo: "<<endl;
   cin>>consumo;
   cout << "__________________________ " <<endl;

  cout << "  Tiempo de dispositivo IOT: " <<endl;
  cin>>horas;
  cout << "__________________________ " <<endl;

  watts=(horas*consumo);
  cout << "  Consumo total de dispositivo IOT: " <<watts<<endl;
    return 0;
    }