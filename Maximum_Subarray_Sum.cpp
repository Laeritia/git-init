#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

//int lista[100];
long long soma[200010];
long long vetor[200010];

int main(){
    int n,i,index=-1;
    long long x,sum=0,somaatual=0,somamax=0,soma2=0,flag=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        sum+=x;
        soma[i]=sum;
        vetor[i]=x;
    }
    for(i=0;i<n;i++){
        if(vetor[i]<0){
            continue;
        }
        somaatual=vetor[i];
        if(i<n-1){
            while(i<(n-1)&&vetor[i+1]>=0){
                i++;
                somaatual+=vetor[i];
            }
        }
        if(flag==0){
            index=i;
            soma2=somaatual;
            somamax=somaatual;
            flag=1;
        } else{
            soma2=max(soma2+soma[i]-soma[index],somaatual);
            index=i;
        }
        if(soma2>somamax){
            somamax=soma2;
        }
    }
    if(flag==0){
        sort(vetor, vetor+n);
        cout<<vetor[n-1];
    } else{
        cout<<somamax<<endl;
    }
    return 0;
}

