#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    char o;
    double m[12][12];

    cin >> o;

    for(int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }

    double soma = 0;
    double count = 0;
    for(int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            if((i>j) && (j+i>11)){
                soma += m[i][j];
                count++;
            }
        }
    }

    if(o == 'S'){
        cout << fixed << setprecision(1) <<  soma << endl;
    }
    else if(o == 'M'){
        cout << fixed << setprecision(1) <<  soma / count << endl;
    }

    return 0;
}