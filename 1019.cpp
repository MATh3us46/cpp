#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int h, m, s;

    h = n/3600;
    n %= 3600;

    m = n/60;
    n %= 60;

    s = n/1;
    n %= 1;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}