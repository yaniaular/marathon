#include <iostream>
#include <string.h>
#include <algorithm> //Para el metodo reverse
#include <stdint.h>

using namespace std;

int main(){
    unsigned long max;
    int tam, i, a, b, aux2;
    long int num[1000000];
    long int aux;
    string par1, par2;
    string input_line;

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
            i = 1;
            while( aux != 1 ){
                if( aux & 1  )
                    aux = aux*3 +1;
                else
                    aux = aux>>1;
                i = i + 1;
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
