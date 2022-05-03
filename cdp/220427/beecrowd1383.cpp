#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();

    int n;
    int mat[10][10];
    int hor[10], vert[10], block[10];
    string resp;

    cin >> n;
    for(int t=1; t<=n; t++){
        for(int i=0; i<9; i++)
            for(int j=0; j<9; j++)
                cin >> mat[i][j];
        resp = "SIM";

        for(int i=0; i<9; i++){
            for(int j=1; j<10; j++){hor[j]=0; vert[j]=0;}
            //cout << "i>" << i << endl;
            for(int j=0; j<9; j++){
                hor[mat[i][j]]++;
                vert[mat[j][i]]++;
                //cout << " >" << hor[mat[i][j]] << " " << mat[i][j];
                //cout << "\t" << vert[mat[j][i]] << " " << mat[j][i]<< endl;
                if(hor[mat[i][j]]>1) resp="NAO";
                if(vert[mat[j][i]]>1) resp="NAO";
                if(i%3==0 && j%3==0){
                    for(int io=0; io<10; io++) block[io]=0;    
                    for(int io=0; io<3; io++){
                        for(int jo=0; jo<3; jo++){
                            block[mat[i+io][j+jo]]++;
                            if(block[mat[i+io][j+jo]]>1) resp="NAO";
                        }
                    }
                }
            }            
        }
        cout << "Instancia " << t << endl;
        cout << resp << endl << endl;
    }
}