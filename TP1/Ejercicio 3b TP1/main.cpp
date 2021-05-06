/*
b.  Confeccionar un programa que calcule la solución de una ecuación
    cuadrática:
    y = ax2 +bx + c
    Realizar un adecuado análisis del problema, entendiendo los posibles
    resultados que se puedan generar. Tener en cuenta en ambos casos
    seleccionar los tipos de datos más adecuados.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c, calculo1, calculox1, calculox2, calculoI;
    cout << "---RESOLUCION DE CUADRATICA---" << endl;
    cout << "Ingresar los valores (en formatos: entero o decimal) de las siguientes variables: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    if(a != 0)
    {
        calculo1 = pow(b,2) - (4*a*c);
        if(calculo1 >= 0)
        {
            calculox1 = ((-b + sqrt(calculo1))/(2*a));
            calculox2 = ((-b - sqrt(calculo1))/(2*a));
            if(calculox1 == calculox2)
            {
                cout << "Un Resultado real encontrado: " << calculox1;
            }
            else
            {
                cout << "Dos Resultados reales encontrados: " << endl;
                cout << "x1: " << calculox1 << endl;
                cout << "x2: " << calculox2 << endl;
            }
        }
else
        {
            cout << "No tiene raices reales." << endl;
            calculoI = (sqrt(calculo1*(-1)))/(2*a);
            calculox1 = ((-1)*b)/(2*a);
            cout << "Resultado imaginario encontrado: " << calculox1 << "+" << calculoI << "i" << " o " << calculox1 << "-" <<  calculoI << "i" << endl;
        }
    }else cout << "El valor 'a' debe ser distinto de 0. La función es lineal" << endl;
    return 0;
}
