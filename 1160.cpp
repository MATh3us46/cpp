#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int pa, pb;
        double g1, g2;

        cin >> pa >> pb >> g1 >> g2;

        int anos = 0;

        while(pa<=pb){
            pa += pa * (g1 / 100.0);
            pb += pb * (g2 / 100.0);
            anos++;

            if(anos > 100){
                break;
            }
        }

        if(anos > 100){
            cout << "Mais de 1 seculo." << endl;
        }
        else{
            cout << anos << " anos." << endl;
        }

    }

    return 0;
}