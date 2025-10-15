#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double s, j=1;

    for(double i=1; i<=39; i+=2){
        s += i/j;
        j*=2;
    }

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}