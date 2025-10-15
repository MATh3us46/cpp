#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int pr=0, se=1, soma=0;

    for(int i=0; i<n; i++){
        if(i == n - 1){
            cout << pr;
        }
        else{
            cout << pr << " ";
        }
        soma = pr + se;
        pr = se;
        se = soma;
    }
    cout << endl;

    return 0;
}