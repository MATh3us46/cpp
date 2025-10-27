#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double f1, f2;

    cin >> f1 >> f2;

    double flu = (1 + f1/100) * (1 + f2/100) - 1;
    flu *= 100;

    cout << fixed << setprecision(6) << flu << endl;

    return 0;
}