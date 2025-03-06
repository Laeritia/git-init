#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector <int> perms;
vector <int>sinais;
int res=0;

int correcao(void){
    int a,b,res1=0;
    if(sinais[0]==2){
        a=perms[0]*perms[1];
    } else{
        a=perms[0]/perms[1];
    }
    if(sinais[2]==2){
        b=perms[2]*perms[3];
    } else{
        if(perms[2]%perms[3]!=0)
            return 0;
        b=perms[2]/perms[3];
    }
    if(sinais[1]==0){
        res1=a+b;
    }
    if(sinais[1]==1){
        res1=a-b;
    }
    if(sinais[1]==2){
        res1=a*b;
    }
    if(sinais[1]==3){
        if(a%b!=0)
            return 0;
        res1=a/b;
    }
    return res1;
}

int correcao2(void){
    int a,b,res2=0;
    if(sinais[0]==0){
        a=perms[0]+perms[1];
    } else{
        a=perms[0]-perms[1];
    }
    if(sinais[2]==0){
        b=perms[2]+perms[3];
    } else{
        b=perms[2]-perms[3];
    }
    if(sinais[1]==0){
        res2=a+b;
    }
    if(sinais[1]==1){
        res2=a-b;
    }
    if(sinais[1]==2){
        res2=a*b;
    }
    if(sinais[1]==3){
        if(b==0||a==0)
            return 0;
        if(a%b!=0)
            return 0;
        res2=a/b;
    }
    return res2;
}

void operacoes(int valor,int ind){
    int guardo;
    if(ind==4){
        if(valor>res&&valor<=24){
            res=valor;
        }
        if((sinais[2]==2||sinais[2]==3)&&(sinais[0]==2||sinais[0]==3)){
            valor=correcao();
            if(valor>res&&valor<=24){
                res=valor;
            }
        }
        if((sinais[2]==0||sinais[2]==1)&&(sinais[0]==0||sinais[0]==1)){
            valor=correcao2();
            if(valor>res&&valor<=24){
                res=valor;
            }
        }
        return;
    }
    for(int i=0;i<4;i++){
        guardo=valor;
        if(i==0){
            valor=valor+perms[ind];
        }
        if(i==1){
            valor=valor-perms[ind];
        }
        if(i==2){
            valor=valor*perms[ind];
        }
        if(i==3){
            if(valor%perms[ind]!=0)
                return;
            valor=valor/perms[ind];
        }
        sinais.push_back(i);
        operacoes(valor,ind+1);
        sinais.pop_back();
        valor=guardo;
    }
}

int main(){
    int n,i,x,j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){
            cin>>x;
            perms.push_back(x);
        }
        sort(perms.begin(),perms.end());
        do{
            operacoes(perms[0],1);
        } while(next_permutation(perms.begin(),perms.end()));
        cout<<res<<endl;
        res=0;
        perms.clear();
    }
    return 0;
}
