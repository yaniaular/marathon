#include <iostream>
#include <string.h>
#include <algorithm> //Para el metodo reverse
#include <stdint.h>

using namespace std;

int main()

    {
    
    int i, j;
        while( i < 10000){
            cout << rand() % 1000000 << " " << rand() % 1000000 << endl;
            i++;
        }

    return 0;
}
