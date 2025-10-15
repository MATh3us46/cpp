#include <iostream>
#include <iomanip>

using namespace std;

float mediap(const double &x, const double &y, const double &z);

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        double x, y, z;
        cin >> x >> y >> z;
        cout << fixed << setprecision(1) << mediap(x, y, z) << endl;
    }

    return 0;
}

float mediap(const double &x, const double &y, const double &z){
    return (((x*2) + (y*3) + (z*5))/10);
}