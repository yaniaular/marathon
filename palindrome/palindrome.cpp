#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stack>
#include <sstream>

#include <algorithm> //Para el metodo reverse

using namespace std;

int palindrome(string p){
    string a,b;
    int tam = p.size();
    
    if( tam % 2 != 0)
        tam = (tam-1)/2;
    else
        tam = tam/2;

    a = p.substr(0, tam);
    
    if(p.size() == 2)
        b = p.at(1);
    else if(p.size() == 1){
        b = p.at(0);
        a = p.at(0);
    }
    else
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
        for(j = 0; j < copia.size(); j++){
            switch( copia.at(j) ){
                case '3':
                    copia.replace(j, 1, "E");
                    break;
                case '2':
                    copia.replace(j, 1, "S");
                    break;
                case '5':
                    copia.replace(j, 1, "Z");
                    break;
            }
        }
        return palindrome(copia);
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
            cout << " -- is a mirrored palindrome";    
        else if(p)
            cout << " -- is a regular palindrome";    
        else if(m)
            cout << " -- is a mirrored string";
        else
            cout << " -- is not a palindrome";
        
        cout << endl;
        getline(cin, input_line);
    }
    return 0;
}
