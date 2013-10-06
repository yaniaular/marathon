#include <iostream>
#include <string.h>
#include <algorithm> //Para el metodo reverse
#include <stdint.h>

using namespace std;

int main(){
    int n, m;
    int i, j;
    char pos;

    while(cin >> n >> m){
        if(n != 0 && m != 0){
            for(i = 0; i < n; i++){
                for(j = 0; j < m; j++){
                    cin >> pos;
                    cout << pos;
                }
                cout << endl;
                }
            }

    }
    return 0;
}
