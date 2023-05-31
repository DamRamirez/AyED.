#include <iostream>
#include <iomanip>
using namespace std;

#define ITEMAX 867000 //Numero de interaciones

int main() {
    double p = 0.0; // Valor de pi
    double d = 1.0; // Denominador
    double e= 1e-6;  // Decimales
    int s = 1; // Signo
    int i = 0;
    //Realizamos el teorema
    for(i ; i<ITEMAX ; i++){
        p += s * (1/d);
        s *= -1;
        d += 2;

        // igualamos el valor de pi en sus 6 primeros decimales
        if ((p*e)== 3141592){
            break;
        }
    }
    //cout << "El valor de iteraciones es: " << i <<endl;
    cout <<setprecision(6)<< fixed << "El valor de pi calculado es: " << p*4 <<endl;

    return 0;
}
