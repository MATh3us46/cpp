#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double m[12][12];

    int l;
    char c;

    cin >> l;
    cin >> c;
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> m[i][j];
        }
    }

    if(c == 'S'){
        double soma = 0;
        for(int j = 0; j < 12; j++){
            soma += m[l][j]; 
        }
        cout << fixed << setprecision(1) << soma << endl;
    }

    else if(c == 'M'){
        double soma = 0;
        for(int j = 0; j < 12; j++){
            soma += m[l][j]; 
        }
        double media = soma/12.0;
        cout << fixed << setprecision(1) << media << endl;
    }
    return 0;
}