#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double m[12][12];
    int c;
    char t;

    cin >> c;
    cin >> t;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> m[i][j];
        }
    }

    if(t == 'S'){
        double soma = 0;
        for(int i=0; i<12; i++){
            soma += m[i][c];
        }
        cout << fixed << setprecision(1) << soma << endl;
    }
    else if(t == 'M'){
        double soma = 0;
        double media = 0;
        for(int i=0; i<12; i++){
            soma += m[i][c];
        }
        media = soma/12.0;
        cout << fixed << setprecision(1) << media << endl;
    }

    return 0;
}