#include <cstdio>
#include <bits/stdc++.h>


using namespace std;

string s;
int vet[26];
int n;
char c;
vector <char> lista;
vector <char> permutation;
bool chosen[8];

void searchp(){
    if((int)permutation.size()==n){
        for(int i=0;i<n;i++){
            cout<<permutation[i];
        }
        cout<<endl;
    } else{
        for(int i=0;i<n;i++){
            if(chosen[i]) continue;
            if(i>0){
                if(lista[i]==lista[i-1]&&chosen[i-1]==0){
                    continue;
                }
            }
            chosen[i]=true;
            permutation.push_back(lista[i]);
            searchp();
            chosen[i]=false;
            permutation.pop_back();
        }
    }
}

int fatorial(int fat){
    int res=1;
    for(int i=1;i<=fat;i++){
        res=res*i;
    }
    return res;
}

int main(){
    int i,x,div=1,num=1;
    cin>>s;
    n=(int)s.size();
    for(i=0;i<n;i++){
        x=s[i]-97;
        vet[x]++;
    }
    for(i=0;i<26;i++){
        if(vet[i]!=0){
            div=div*fatorial(vet[i]);
        }
    }
    num=fatorial(n);
    cout<<num/div<<endl;
    for(i=0;i<26;i++){
        while(vet[i]!=0){
            c=i+97;
            lista.push_back(c);
            vet[i]--;
        }
    }
    searchp();
    return 0;
}
