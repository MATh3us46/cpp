#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n, h;
    double v, salary;

    cin >> n;
    cin >> h;
    cin >> v;

    salary = v * h;

    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}