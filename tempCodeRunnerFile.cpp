#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x;

    cin >> x;

    if(x >= 0){
        cout << "+" << uppercase << scientific << setprecision(4) << x << "\n";
    }
    else{
        cout << "-" << uppercase << scientific << setprecision(4) << x << "\n";
    }
}