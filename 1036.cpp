#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double a, b, c, r1, r2, delta;
    cin >> a >> b >> c;

    delta = pow(b, 2) - 4 * a * c;

    if(a==0 || delta<0){
        cout << "Impossivel calcular" << endl;            
    }else{
        r1 = (-b + sqrt(delta)) / (2*a);
        r2 = (-b - sqrt(delta)) / (2*a);

        cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
    }
    return 0;
}