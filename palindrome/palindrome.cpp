#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stack>
#include <sstream>

#include <algorithm> //Para el metodo reverse

using namespace std;

int palindrome(string p){
    string b;
    int tam = p.size();
    int mod = tam % 2; 
    tam = tam/2;
    b = p.substr(tam + mod);
    reverse(b.begin(), b.end());
    return p.substr(0, tam) == b;
}

int mirror(string p){
    string reve = "A3HILJMO2TUVWXY51SEZ8";
    string copia = p;
    int band, j;
    j = 0;

    band = 1;
    while( j < p.size() and band != -1){
        band = reve.find( p.at(j) );
        j++;
    }
       
    if( band != -1 ){
        
        for(j = 0; j < copia.size(); j++){
            switch( copia.at(j) ){
                case '3': copia.replace(j, 1, "E"); break;
                case 'E': copia.replace(j, 1, "3"); break;
                case '2': copia.replace(j, 1, "S"); break;
                case 'S': copia.replace(j, 1, "2"); break;
                case '5': copia.replace(j, 1, "Z"); break;
                case 'Z': copia.replace(j, 1, "5"); break;
                case 'J': copia.replace(j, 1, "L"); break;
                case 'L': copia.replace(j, 1, "J"); break;
            }
        }
        reverse( p.begin(), p.end() );
        return p == copia;
    }
    else{
        return false;
    }
}

int main(){

   
    string input_line;
    int p, m;

    getline(cin, input_line);
    while(cin){
        cout << input_line;
        
        p = palindrome(input_line);
        m = mirror(input_line);
        
        if(p && m)
            cout << " -- is a mirrored palindrome.";    
        else if(p)
            cout << " -- is a regular palindrome.";    
        else if(m)
            cout << " -- is a mirrored string.";
        else
            cout << " -- is not a palindrome.";
        
        cout << endl<< endl;
        getline(cin, input_line);
    }
    return 0;
}
