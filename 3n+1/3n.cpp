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


    for(i = 0; i <= 999999; i++)
        num[i] = -1;

    getline(cin, input_line);
    while(cin){
        
        tam = input_line.size();
        for( i = 0; i < tam; i++){
            if(input_line[i] == ' ' ){
                par1 = input_line.substr(0, i);
                par2 = input_line.substr(i+1, tam);
                a = atoi( par1.c_str() );
                b = atoi( par2.c_str() );
                break;
            } 
        }
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
                    while( aux > 1 ){
                        if( aux % 2 == 1  )
                            aux = aux*3 +1;
                        else
                            aux = aux/2;
                        i+=1;
                    }
                    num[aux2] = i;
                } 
                else
                    i = num[aux2];
            if( i > max ){
                max = i;
            }
        }

        cout << " "<< max; 
        cout << endl;
        getline(cin, input_line);
    }
    return 0;
}
