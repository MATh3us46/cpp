#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int r1, r2;
        cin >> r1 >> r2;

        int mr = r1 + r2;

        cout << mr << endl;
    }

    return 0;
}