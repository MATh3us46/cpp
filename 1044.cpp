#include <iostream>

using namespace std;

string multiplos(int v[]);

int main(){

    int v[2];
    for(int i=0; i<2; i++){
        cin >> v[i];
    }

    cout << multiplos(v) << endl;

    return 0;
}

string multiplos(int v[]){
    int a = v[0], b = v[1];
    if(a>b)swap(a,b);

    if(b%a == 0){
        return "Sao Multiplos";
    }else{
        return "Nao sao Multiplos";
    }
}