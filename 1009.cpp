#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string name;
    double s, t, total, x;

    cin >> name;
    cin >> s;
    cin >> t;

    x = t * 0.15;

    total = s + x;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}