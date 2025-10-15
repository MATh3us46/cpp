#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int total = 0, totalc = 0, totalr = 0, totals = 0;
    double percenc = 0, percenr = 0, percens = 0; 

    int n;
    cin >> n;

    int qtd;
    char c;

    for(int i=0; i<n; i++){
        cin >> qtd;
        if(qtd >= 1 && qtd <= 15){
            cin >> c;
            total += qtd;
            if(c == 'C'){
                totalc += qtd;
            }
            else if(c == 'R'){
                totalr += qtd;
            }
            else if(c == 'S'){
                totals += qtd;
            }
            percenc = (totalc * 100.0) / total;
            percenr = (totalr * 100.0) / total;
            percens = (totals * 100.0) / total;
        }
        else{
            break;
        }
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << totalc << endl;
    cout << "Total de ratos: " << totalr << endl;
    cout << "Total de sapos: " << totals << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << percenc << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << percenr << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << percens << " %" << endl;  

    return 0;
}