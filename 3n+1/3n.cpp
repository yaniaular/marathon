#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stack>
#include <sstream>
#include <stdio.h>
#include <algorithm> //Para el metodo reverse

using namespace std;


int main(){
    int tam, i, a, b, max, aux, aux2;
    int num[1000000];
    string par1, par2;
    string input_line;

    for(i = 0; i < 999999; i++)
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
        max = -1;
        for(aux2 = a; aux2 <= b ; aux2++){
            i = 1;
            //if(num[aux2] == -1){
                aux = aux2;
                while( aux != 1 ){
                    if( aux % 2 == 1  ){
                        aux = aux*3 +1;
                    }
                    else{
                        aux = aux/2;
                    }
                    i++;
                }
                    //num[aux2] = i;
            //}
            //else
            //    max = num[aux2];

              if(i > max){
                max = i;
                }
        }

        cout <<  a << " " << b << " "<< max; 
        cout << endl;
        getline(cin, input_line);
    }
    return 0;
}
