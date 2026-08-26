#include <iostream>

using namespace std;

int main(){
    int a, b, maior;

    cin >> a >> b;

    if(a >= b){
        maior = a;
    }
    else if(b >= a){
        maior = b;
    }

    cout << maior << "\n";
}