#include <iostream>
using namespace std;

int main(){
    int qt;
    cin >> qt;

    for(int i = 0; i < qt; i++){
        string j1, j2;
        string de1, de2;
        int n1, n2;

        cin >> j1 >> de1 >> j2 >> de2;
        cin >> n1 >> n2;

        int soma = n1 + n2;

        if(soma % 2 == 0){ 
            if (de1 == "PAR"){
                cout << j1 << endl;
            }
            else{
                cout << j2 << endl;
            }
        } 
        else{ 
            if(de1 == "IMPAR"){
                cout << j1 << endl;
            }
            else{
                cout << j2 << endl;
            }
        }
    }

    return 0;
}
