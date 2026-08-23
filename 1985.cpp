#include <bits/stdc++.h>
#include <map>

using namespace std;

int main(){
    int n, p, q;
    map<int, double> map = {
        {1001, 1.50},
        {1002, 2.50},
        {1003, 3.50},
        {1004, 4.50},
        {1005, 5.50}
    };

    double total = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> p >> q;
        total += map[p] * q;
    }

    cout << fixed << setprecision(2) << total << "\n";
}