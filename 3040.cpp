#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int altArvore, diametro, qtdGalhos;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> altArvore >> diametro >> qtdGalhos;
        if((altArvore >= 200 && altArvore <= 300) && (diametro >= 50) && (qtdGalhos >= 150)){
            cout << "Sim\n";
        }
        else{
            cout << "Nao\n";
        }
    }
}