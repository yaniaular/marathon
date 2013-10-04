#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stack>
#include <sstream>

#include <algorithm> //Para el metodo reverse

using namespace std;


int main(){

   
    string input_line;

    getline(cin, input_line);
    while(cin){
        cout << input_line;
        getline(cin, input_line);
        cout << endl;
    }
    return 0;
}
