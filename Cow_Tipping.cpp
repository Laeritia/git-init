#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

bool matriz[10][10];
bool linha[10];

//FISICA

int main(){
    int n,i,j,z,w;
    string a[10];
    int ans=0;
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]=='0'){
                matriz[i][j]=false;
            } else{
                matriz[i][j]=true;
            }
        }
    }
    for(i=n-1;i>=0;i--){
        for(j=n-1;j>=0;j--){
            if(matriz[i][j]){
                ans++;
                for(z=i;z>=0;z--){
                    for(w=j;w>=0;w--){
                        if(matriz[z][w]){
                            matriz[z][w]=false;
                        } else{
                            matriz[z][w]=true;
                        }
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
