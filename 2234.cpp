#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double h, p;

    cin >> h >> p;

    cout << fixed << setprecision(2) << h / p << "\n";
}