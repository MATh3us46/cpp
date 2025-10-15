#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double s;

    for(double i=1; i<=100; i++){
        s += 1/i;
    }

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}