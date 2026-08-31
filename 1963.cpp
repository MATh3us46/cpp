#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b, x;
    cin >> a >> b;
    
    x = b - a;
    
    cout << fixed << setprecision(2) << (x / a) * 100 << "%\n";
}