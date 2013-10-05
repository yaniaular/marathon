#include <iostream>
#include <string.h>
#include <algorithm> //Para el metodo reverse
#include <stdint.h>

using namespace std;

int main(){
    long int aux;
    unsigned long max;
    int tam, i, a, b, aux2;
    long int num[400000];
    long int num2[400000];
    long int num3[200000];
    string par1, par2;
    string input_line;


    for(i = 0; i <= 399999; i++)
        num[i] = -1;
    
    for(i = 0; i <= 399999; i++)
        num2[i] = -1;
    
    for(i = 0; i <= 199999; i++)
        num3[i] = -1;

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
            if( aux2 < 400000 ){
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
            }
            else if(aux2 >= 400000 && aux2 < 800000 ){
                if(  num2[aux2 - 400000] == -1){
                    i = 1;
                    while( aux > 1 ){
                        if( aux % 2 == 1  )
                            aux = aux*3 +1;
                        else
                            aux = aux/2;
                        i+=1;
                    }
                    num2[aux2 - 400000] = i;
                }
                else
                    i = num2[aux2 - 400000];
            }
            else{
                if(  num3[aux2 - 800000] == -1){
                    i = 1;
                    while( aux > 1 ){
                        if( aux % 2 == 1  )
                            aux = aux*3 +1;
                        else
                            aux = aux/2;
                        i+=1;
                    }
                }
                else
                    i = num3[aux2 - 800000];
            }

                    if(i >= 525){
                    num3[aux2 - 800000] = i;
                    }
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
