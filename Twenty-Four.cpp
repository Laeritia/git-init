#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector <int> perms;
vector <int>sinais;
int res=0,flag=0;

int op(int a, int b, int i){
    int valor=0;
    flag=0;
    if(i==0){
        valor=a+b;
    }
    if(i==1){
        valor=a-b;
    }
    if(i==2){
        valor=a*b;
        }
    if(i==3){
        if(b==0){
            flag=1;
            return 0;
        }
        if(a%b!=0){
            flag=1;
            return 0;
        }
        valor=a/b;
    }
    return valor;
}

int parent1(void){
    int valor1=perms[0];
    int ind=1;
    for(int i=0;i<3;i++){
        valor1=op(valor1,perms[ind],sinais[i]);
        if(flag==1)
            break;
        ind++;
    }
    if(flag==1)
        return 0;
    return valor1;
}

int parent2(void){
    int valor2=perms[1];
    valor2=op(valor2,perms[2],sinais[1]);
    if(flag==1)
        return 0;
    valor2=op(valor2,perms[3],sinais[2]);
    if(flag==1)
        return 0;
    valor2=op(perms[0],valor2,sinais[0]);
    if(flag==1)
        return 0;
    return valor2;
}

int parent3(void){
    int valor3=perms[1];
    valor3=op(valor3,perms[2],sinais[1]);
    if(flag==1)
        return 0;
    valor3=op(perms[0],valor3,sinais[0]);
    if(flag==1)
        return 0;
    valor3=op(valor3,perms[3],sinais[2]);
    if(flag==1)
        return 0;
    return valor3;
}

int parent4(void){
    int valor4=perms[0],valor42=perms[2];
    valor4=op(valor4,perms[1],sinais[0]);
    if(flag==1)
        return 0;
    valor42=op(valor42,perms[3],sinais[2]);
    if(flag==1)
        return 0;
    valor4=op(valor4,valor42,sinais[1]);
    if(flag==1)
        return 0;
    return valor4;
}

int parent5(void){
    int valor5=perms[2];
    valor5=op(valor5,perms[3],sinais[2]);
    if(flag==1)
        return 0;
    valor5=op(perms[1],valor5,sinais[1]);
    if(flag==1)
        return 0;
    valor5=op(perms[0],valor5,sinais[0]);
    if(flag==1)
        return 0;
    return valor5;
}

void operacoes(int ind){
    int valor=0;
    if(ind==4){
        valor=parent1();
        if(valor>res&&valor<=24){
            res=valor;
        }
        valor=parent2();
        if(valor>res&&valor<=24){
            res=valor;
        }
        valor=parent3();
        if(valor>res&&valor<=24){
            res=valor;
        }
        valor=parent4();
        if(valor>res&&valor<=24){
            res=valor;
        }
        valor=parent5();
        if(valor>res&&valor<=24){
            res=valor;
        }
        return;
    }
    for(int i=0;i<4;i++){
        sinais.push_back(i);
        operacoes(ind+1);
        sinais.pop_back();
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
            operacoes(1);
        } while(next_permutation(perms.begin(),perms.end()));
        cout<<res<<endl;
        res=0;
        perms.clear();
    }
    return 0;
}
