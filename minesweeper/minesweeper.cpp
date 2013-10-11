#include <iostream>

using namespace std;

int main(){
    int n, m;
    int i, j, p;
    char pos;
    int k = 1;
    int buscaminas[101][101];
    cin >> n >> m;
    if( n!=0 || m!= 0 ){
    while(true){
            
            for(i = 0; i < n; i++)
                for(j = 0; j < m; j++)
                    buscaminas[i][j]=0;
            
            for(i = 0; i < n; i++){
                for(j = 0; j < m; j++){
                    cin >> pos;
                    if(pos == '*'){
                        buscaminas[i][j]=-1;
                        
                        if(i-1 >=0 && buscaminas[i-1][j] != -1 )
                            buscaminas[i-1][j]+=1;

                        if(i+1 >=0 && buscaminas[i+1][j] != -1 )
                            buscaminas[i+1][j]+=1;
                        
                        if(j-1 >=0){
                            if(buscaminas[i][j-1] != -1) 
                                buscaminas[i][j-1]+=1;
                            if(i-1 >=0 && buscaminas[i-1][j-1] != -1 )
                                buscaminas[i-1][j-1]+=1;
                            if(i+1 >=0 && buscaminas[i+1][j-1] != -1 )
                                buscaminas[i+1][j-1]+=1;
                        }
                        
                        if(j+1 >=0 ){
                            if(buscaminas[i][j+1] != -1)
                                buscaminas[i][j+1]+=1;
                            if(i-1 >=0 && buscaminas[i-1][j+1] != -1 )
                                buscaminas[i-1][j+1]+=1;
                            if(i+1 >=0 && buscaminas[i+1][j+1] != -1 )
                                buscaminas[i+1][j+1]+=1;
                        }
                    }

                }
            }
                cout << "Field #" << k << ":" << endl;
                k+=1; 
                for(i = 0; i < n; i++){
                    for(j = 0; j < m; j++){
                        p = buscaminas[i][j];
                        if( p == -1)
                            cout << "*";
                        else
                            cout << buscaminas[i][j];
                    }
                    cout << endl;
                }
                cin >> n >> m;
                if( n==0 && m== 0)
                    break;
                else
                    cout << endl;
        }
    }
    return 0;
}
