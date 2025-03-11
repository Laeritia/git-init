#include <cstdio>
#include <bits/stdc++.h>

 using namespace std;

 set<int> indiv;
 set<pair<int,int>> teams;
 char matriz[3][3];

 void cont_vitoria(char a,char b,char c){
     if(a==b){
        if(a==c){
            indiv.insert(a);
        } else{
            teams.insert({a,c});
            teams.insert({c,a});
        }
     } else{
         if(a==c||b==c){
            if(a!=c){
                teams.insert({c,a});
                teams.insert({a,c});
            } else{
                teams.insert({b,c});
                teams.insert({c,b});
            }
         }
     }
     return;
 }

 int main(){
     int i,j;
     freopen("tttt.in", "r", stdin);
     freopen("tttt.out", "w", stdout);
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>matriz[i][j];
        }
     }
     cont_vitoria(matriz[0][0],matriz[0][1],matriz[0][2]);
     cont_vitoria(matriz[1][0],matriz[1][1],matriz[1][2]);
     cont_vitoria(matriz[2][0],matriz[2][1],matriz[2][2]);
     cont_vitoria(matriz[0][0],matriz[1][0],matriz[2][0]);
     cont_vitoria(matriz[0][1],matriz[1][1],matriz[2][1]);
     cont_vitoria(matriz[0][2],matriz[1][2],matriz[2][2]);
     cont_vitoria(matriz[0][0],matriz[1][1],matriz[2][2]);
     cont_vitoria(matriz[0][2],matriz[1][1],matriz[2][0]);
     cout<<indiv.size()<<"\n";
     cout<<teams.size()/2;
     return 0;
 }
