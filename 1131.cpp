#include <iostream>

using namespace std;

int main(){

    int ng = 1;
    int soma = 0, vi = 0, vg = 0, e = 0; 


    while(ng == 1){
        int inter = 0, gremio = 0;
        cin >> inter >> gremio;
        soma++;
        if(inter == gremio){
            e++;
        }
        else if(inter > gremio){
            vi++;
        }
        else if(inter < gremio){
            vg++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> ng;
        if(ng == 2){
            break;
        }
    }

    cout << soma << " grenais" << endl;
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << e << endl;
    if(vi > vg){
        cout << "Inter venceu mais" << endl;
    }
    else if(vi < vg){
        cout << "Gremio venceu mais" << endl;
    }
    else if(vi == vg){
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}