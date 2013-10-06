#include <iostream>
#include <string.h>
#include <algorithm> //Para el metodo reverse
#include <stdint.h>

using namespace std;

int main(){
    long int tam, i, a, b, max, aux, aux2;
    long int num;
    string par1, par2;
    string input_line;
        
        a = 1;
        b = 999999;
        
        max = -1;
        for(aux2 = a; aux2 <= b ; aux2++){
            aux = aux2;
            i = 1;
            while( aux > 1 ){
                if( (aux % 2) == 1  )
                    aux = (aux*3) +1;
                else
                    aux = aux/2;
                
                i++;
            }
            if( i > max){
                cout << i << endl;
                max = i;
            }
        }

        cout <<  a << " " << b << " "<< max; 
        cout << endl;
    return 0;
}
