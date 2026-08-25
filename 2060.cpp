#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, l, cont = 0;
    map<int, int> vet = {
        {2, 0},
        {3, 0},
        {4, 0},
        {5, 0},
    };

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> l;
        for(auto &par : vet){
            if(l % par.first == 0){
                par.second++;
            }
        }
    }

    for(auto par : vet){
        cout << par.second << " Multiplo(s) de " << par.first << "\n";
    }
}