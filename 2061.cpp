#include <iostream>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;
    for(int i=0; i<m; i++){
        string s;

        cin >> s;

        if(s == "fechou"){
            n++;
        }
        else if(s == "clicou"){
            n--;
        }
    }

    if(n < 0){
        cout << 0 << "\n";
    }
    else{
        cout << n << "\n";
    }
}