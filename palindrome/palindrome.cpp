#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stack>
#include <sstream>

#include <algorithm>

using namespace std;

int palindrome(string p){
    string a,b;
    int tam = p.size();
    
    if( tam % 2 != 0)
        tam = (tam-1)/2;
    else
        tam = tam/2;

    a = p.substr(0, tam);
    b = p.substr(tam + 1);
    reverse(b.begin(), b.end());
    
    if( a == b)
        return true;
    else
        return false;
}

int mirror(string p){
    string reverse = "A3HILJMO2TUVWXY51SEZ8";
    string copia = p;
    int pos, j;
    j = 0;

    while(j < reverse.size()){
        pos = p.find( reverse.at(j) );
        if( pos != -1 ){
            p.erase( pos, 1);
        }else{
            j++;
        }
    }
    if( p.size() == 0 ){
       //Quede en hacer el pado de cambiar numero por letra equivalente 
        return true;
    }
    else{
        return false;
    }
}

int main(){

   
    string input_line;

    getline(cin, input_line);
    while(cin){
        cout << input_line;
        
        if( palindrome(input_line) )
            cout << " -- is a regular palindrome";    
        if( mirror(input_line) )
            cout << " -- is a mirrored string";
        cout << endl;
        getline(cin, input_line);
    }
/*    string input_line;
    string a,b;
    stack<string> pila;

    while(true){
        getline(cin, input_line);
        
        if(input_line == "*"){
            break;
        }
        else{
            cout << input_line.substr( 0, input_line.find(":") +1 ) << ' ';
            input_line = input_line.substr( input_line.find(":") + 1 );      
            for(int i = input_line.size()-1; i > -1; i--){
                if( isalpha( input_line.at(i) ) ){ 
                    stringstream ss; string s;
                    ss << input_line.at(i); ss >> s;
                    pila.push( s );
                }
                else{
                    if( input_line.at(i) == '&' ){
                       a = pila.top(); pila.pop();
                       b = pila.top(); pila.pop();
                       if( a.at(0) == '(' ){
                           a = a.substr(1, a.size()-2 );
                       }
                       if( b.at(0) == '(' ){
                           b = b.substr(1, b.size()-2 );
                       }
                       pila.push( "(" + a + ", " + b + ")" );
                    }
                    if( input_line.at(i) == '@' ){
                       a = pila.top(); pila.pop();
                       b = pila.top(); pila.pop();
                       pila.push( a + " -> " + b );
                    }
                }
            }
            cout << pila.top() << endl;
        }
    }*/
    return 0;
}
