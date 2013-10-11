#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int i, resu;
    double cant, gastos[1001], total, total2, result, result2;

    cin >> cant;
    while(cant != 0.0){
        total = 0.0;
        result = 0.0;
        for(i = 0; i < cant; i++){
             cin >> gastos[i];
             total+= gastos[i];
        }
        total = total / cant;
                resu = total * 100;
                total = (float) resu / 100;
        total2 = (float) resu / 100;
        total2+=0.01;
        for(i = 0; i < cant; i++){
            if( gastos[i] >= total  ){
                cout << gastos[i] << " - " << total << " + " << result << endl;
                //resu = result * 100;
                //result = (float) resu / 100;
                result = ( gastos[i] - total  ) + result;
            }
            else{
                result = 
            }
        }
        cout << "$";
        printf("%.2f",result);
        cout << endl;
        cin >> cant;
    }
    return 0;
}
