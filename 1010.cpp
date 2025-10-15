#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int c, n;
    double v, total, p1, p2;

    cin >> c >> n >> v;
    p1 = n * v;
    cin >> c >> n >> v;
    p2 = n * v;

    total = p1 + p2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}