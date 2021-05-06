/*
a. Realizar un programa que lea una velocidad en mts/seg y la transforme a
kmts/hr. El programa debe solicitar por pantalla un valor numérico, luego el
usuario debe ingresar un valor, finalmente el programa debe mostrar por
pantalla el resultado de la conversión.
*/
#include <iostream>

using namespace std;

int main()
{
    float valor, conversion;
    cout << "Ingresar el valor de la velocidad de mts/seg: ";
    cin >> valor;
    conversion = (valor * 3600)/1000;
    cout << "El valor ingresado de " << valor << "mts/seg equivale a " << conversion << " km/h." << endl;
    return 0;
}
