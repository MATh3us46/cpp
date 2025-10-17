#include <iostream>
#include <cmath>

using namespace std;

int main(){

    while(true){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 0 || b == 0 || c == 0){
            break;
        }
        else{
            int area = a*b;
            int lado = sqrt((100 * area) / c);
            cout << lado << endl;
        }
    }
}