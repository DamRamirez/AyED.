#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double p = 0.0; // Valor de pi
    double d = 1.0; // Denominador
    double e= 1e-6;  // Decimales
    int s = 1; // Signo
    int i = 0; //Interaciones

    //Realizamos el teorema
    while (p !=0.785399) {
        p += s/d;
        d += 2.0;
        s *= -1;
        i++;
        //Cuando el valor absoluto sea mayor a e, se ejecutara el if
        if (p - 0.785398 < e && p - 0.785398 > -e) {
            p+= e;
            break;
        }}
    cout << "La cantidad de iteraciones es: " << i <<endl;
    cout <<setprecision(6)<< fixed << "El valor de pi calculado es: " << p*4<<endl;
    return 0;
}
