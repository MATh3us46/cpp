#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double c, x;
    string s;

    cin >> c;
    for(int i=0; i<c; i++){
        cin >> s;
        x = s.length();
        cout << fixed << setprecision(2) << x/100 << "\n";
    }
}