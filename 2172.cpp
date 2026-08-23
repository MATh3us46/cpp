#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, m;

    while(true){
        cin >> x >> m;
        if(x == 0 && m == 0){
            break;
        }

        cout << x * m << "\n";
    }
}