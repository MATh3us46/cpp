#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double media;
    media = ((n1 * 2)+(n2 * 3)+(n3 * 4)+(n4 * 1)) / 10;
    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if(media < 5.0){
        cout << "Aluno reprovado." << endl;
    }else{
        cout << "Aluno em exame." << endl;
        double ne;
        cin >> ne;
        cout << "Nota do exame: " << fixed << setprecision(1) << ne << endl;
        media = (media + ne)/2;
        if(media >= 5){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << media << endl;
        }else{
            cout << "Aluno reprovado." << endl;
        }
    }



    return 0;
}