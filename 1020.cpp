#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a, m, d;

    a = n/365;
    cout << a << " ano(s)" << endl;
    n%=365;

    m = n/30;
    cout << m << " mes(es)" << endl;
    n%=30;
    
    d = n/1;
    cout << d << " dia(s)" << endl;
    n%=1;

    return 0;
}