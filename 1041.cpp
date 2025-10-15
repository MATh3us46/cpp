#include <iostream>

using namespace std;

int main(){

    double cor[2];
    for(int i=0;i<2;i++){
        cin >> cor[i];
    }
    if(cor[0] == 0 && cor[1] == 0){
        cout << "Origem" << endl;
    }
    else if(cor[0] == 0){
        cout << "Eixo Y" << endl;
    }
    else if(cor[1] == 0){
        cout << "Eixo X" << endl;
    }
    else if(cor[0] > 0 && cor[1] > 0){
        cout << "Q1" << endl;
    }
    else if(cor[0] < 0 && cor[1] > 0){
        cout << "Q2" << endl;
    }
    else if(cor[0] < 0 && cor[1] < 0){
        cout << "Q3" << endl;
    }
    else if(cor[0] > 0 && cor[1] < 0){
        cout << "Q4" << endl;
    }
    return 0;
}