#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector <int> pesos;
bool check[100];

int main(){
    int n,i,x,instab=0,instabmin=10000000,pes1,pes2,j,flag=1,z;
    cin>>n;
    for(i=0;i<2*n;i++){
        cin>>x;
        pesos.push_back(x);
    }
    sort(pesos.begin(),pesos.end());
    for(i=0;i<2*n;i++){
        for(j=i;j<2*n;j++){
            for(z=0;z<2*n;z++){
                check[z]=false;
            }
            instab=0;
            if(j==i)
                continue;
            pes1=0;
            pes2=1;
            while(pes2<2*n){
                flag=1;
                while(pes2<2*n&&flag==1){
                    flag=0;
                    if(pes1==i||pes1==j||check[pes1]==true){
                        pes1++;
                        flag=1;
                    }
                    if(pes2==i||pes2==j||pes2<=pes1){
                        pes2++;
                        flag=1;
                    }
                }
                if(pes2>=2*n){
                    break;
                }
                instab=instab+pesos[pes2]-pesos[pes1];
                check[pes2]=true;
                pes1++;
                pes2++;
            }
            if(instab<instabmin){
                instabmin=instab;
            }
        }
    }
    cout<<instabmin;
    return 0;
}
