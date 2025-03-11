#include <cstdio>
#include <bits/stdc++.h>

 using namespace std;

 set<string> lista;
 string palavra;

 int main(){
     int n,i,flag=0,cont=1,j;
     freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
     string s;
     cin>>n;
     cin>>s;
     while(flag==0&&cont<=n){
        flag=1;
        for(i=0;i<n&&i<=n-cont;i++){
            palavra="";
            for(j=i;j<i+cont;j++){
                palavra.push_back(s[j]);
            }
            if(lista.count(palavra)==1){
                flag=0;
                break;
            }
            lista.insert(palavra);
        }
        cont++;
     }
     cout<<cont-1;
     return 0;
 }
