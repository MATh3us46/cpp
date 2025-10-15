#include <iostream>

using namespace std;

string valores(int a, int b, int c, int d);

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << valores(a, b, c, d) << endl;

    return 0;
}

string valores(int a, int b, int c, int d){
    if(b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a%2==0){
        return "Valores aceitos";
    }
    else{
        return "Valores nao aceitos";
    }
}