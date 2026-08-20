#include <bits/stdc++.h>
#include <vector>

using namespace std;

struct aluno{
    int matricula;
    double nota;
};

int main(){
    int n, x;
    double y;
    vector<aluno> vet;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        vet.push_back({x, y});
    }

    double maior_nota = 0; 
    int matricula_maior = 0;

    for(int i=0; i<vet.size(); i++){
        if(vet[i].nota > maior_nota){
            maior_nota = vet[i].nota;
            matricula_maior = vet[i].matricula;
        }
    }

    if(maior_nota < 8.0){
        cout << "Minimum note not reached\n";
    }
    else{
        cout << matricula_maior << "\n";
    }
}
