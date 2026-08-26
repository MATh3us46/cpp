#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x;

    cin >> x;

    cout << showpos << uppercase << scientific << setprecision(4) << x << "\n";
}