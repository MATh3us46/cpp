#include <iostream>

using namespace std;

int main(){
    int a, b, q, r;

    cin >> a >> b;
    r = a % b;
    q = a / b;

    if(r < 0){
        r += abs(b);

        if(b > 0){
            q--;
        }
        else{
            q++;
        }
    }

    cout << q << " " << r << "\n";
}