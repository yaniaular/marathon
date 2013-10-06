#include <iostream>
#include <string.h>
#include <algorithm> //Para el metodo reverse
#include <stdint.h>

using namespace std;

int main(){
    unsigned long max;
    int i, a, b, aux2;
    long int num[1000001];
    long int aux;

    for(i = 0; i <= 1000000; i++)
        num[i] = -1;

    while(cin >> a >> b){
        
        cout <<  a << " " << b;
        if( a > b  ){
            max = b;
            b = a;
            a = max;
        }
             
        max = 0;
        for(aux2 = a; aux2 <= b ; aux2++){

            aux = aux2;
                if(  num[aux2] == -1){
                    i = 1;
                    while( aux != 1 ){
                        if( aux & 1  )
                            aux = aux*3 +1;
                        else
                            aux = aux>>1;
                        i = i + 1;
                    }
                    num[aux2] = i;
                } 
                else{
                    i = num[aux2];
                }
            if( i > max ){
                max = i;
            }
        }

        cout << " "<< max; 
        cout << endl;

    }
    return 0;
}
