#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    vector<int> vet;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> r;
        vet.push_back(r);
    }

    for(int i=1; i<vet.size(); i++){
        if(vet[i] < vet[i-1]){
            cout << i + 1 << "\n";
            return 0;
        }
    }
    cout << 0 << "\n";
}