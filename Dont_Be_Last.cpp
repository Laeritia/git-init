#include <cstdio>
#include <bits/stdc++.h>

 using namespace std;

map<string,int> vacas;

 int main(){
     int n,i,x,minimo=1000000000,minimo2=1000000000,flag=0;
     string s,vaca;
     freopen("notlast.in", "r", stdin);
     freopen("notlast.out", "w", stdout);
     cin>>n;
     for(i=0;i<n;i++){
        cin>>s>>x;
        if(vacas.count(s)==0){
            vacas[s]=x;
        } else{
            vacas[s]=vacas[s]+x;
        }
     }
     for(const auto &p : vacas){
        if(p.second==minimo){
            flag=1;
        }
        if(p.second<minimo){
            flag=0;
            minimo=p.second;
            vaca=p.first;
        }
     }
     if(vacas.size()<7){
        if(flag==1){
            cout<<"Tie";
        } else{
            cout<<vaca;
        }
     } else{
         for(const auto &p : vacas){
            if(p.second==minimo2){
                flag=1;
            }
            if(p.second<minimo2&&p.second>minimo){
                flag=0;
                minimo2=p.second;
                vaca=p.first;
            }
        }
        if(flag==1){
            cout<<"Tie";
        } else{
            cout<<vaca;
        }
     }
     return 0;
 }
