#include <iostream>
#include <vector>

using namespace std;

int main(){
    int p, n, h;
    bool status = true;
    vector<int> vet;

    cin >> p >> n;

    for(int i=0; i<n; i++){
        cin >> h;
        vet.push_back(h);
    }

    for(int i=1; i<vet.size(); i++){
        if(abs(vet[i] - vet[i-1]) > p){
            status = false;
        }
    }

    if(status){
        cout << "YOU WIN\n";
    }
    else{
        cout << "GAME OVER\n";
    }
}