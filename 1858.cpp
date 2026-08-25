#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, t, menor, m=0;
    vector<int> vet;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        vet.push_back(t);
    }

    menor = vet[0];

    for(int i=0; i<vet.size(); i++){
        if(menor > vet[i]){
            menor = vet[i];
            m = i;
        }
    }

    cout << m+1 << "\n";
}