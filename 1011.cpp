#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double r, volume;

    cin >> r;

    volume = (4.0/3.0) * 3.14159 * pow(r, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}