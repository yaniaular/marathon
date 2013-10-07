#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int i, resu;
    double cant, gastos[1001], total, result;

    cin >> cant;
    while(cant != 0.0){
        total = 0.0;
        result = 0.0;
        for(i = 0; i < cant; i++){
             cin >> gastos[i];
             total+= gastos[i];
        }
        total = total / cant;
        for(i = 0; i < cant; i++){
            if( gastos[i] >= total  ){
            resu = result * 100;
            result = (float) resu / 100;
                result = ( gastos[i] - total  ) + result;
            }
        }
        cout << "$";
        printf("%.2f",result);
        cout << endl;
        cin >> cant;
    }
    return 0;
}
