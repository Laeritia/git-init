#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int sleep[100000];

int main(){
    int t,n,i,maximo=0,flag,divisor,soma=0,subsoma=0,flag2=0,numdiv=0,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        maximo=0;
        soma=0;
        for(j=0;j<n;j++){
            cin>>sleep[j];
            soma=soma+sleep[j];
            if(sleep[j]>maximo){
                maximo=sleep[j];
            }
        }
        flag=0;
        divisor=maximo;
        numdiv=n;
        while(flag==0&&divisor!=0){
            flag2=0;
            numdiv=0;
            if(soma%divisor!=0){
                divisor++;
                continue;
            }
            subsoma=0;
            for(j=0;j<n;j++){
                subsoma=subsoma+sleep[j];
                if(subsoma==divisor){
                    subsoma=0;
                    numdiv++;
                }
                if(subsoma>divisor){
                    flag2=1;
                    break;
                }
            }
            if(flag2==0&&subsoma==0){
                flag=1;
            }
            divisor++;
        }
        cout<<n-numdiv<<endl;
    }
    return 0;
}
