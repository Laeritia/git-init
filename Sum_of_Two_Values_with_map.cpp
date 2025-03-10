#include <cstdio>
 #include <bits/stdc++.h>

 using namespace std;

 map<int,int> map1;
 map<int,int> map2;
 vector<pair<int,int>> lista;

 int main(){
     int n,i,x,y,value,flag=0;
     cin>>n>>x;
     for(i=0;i<n;i++){
        cin>>y;
        lista.push_back({y,i});
        if(map1.count(y)==0){
            map1[y]=i;
        } else{
            map2[y]=i;
        }
     }
     sort(lista.begin(),lista.end());
     for(i=0;i<n;i++){
        value=x-lista[i].first;
        if(map1.count(value)==1&&value!=lista[i].first){
            cout<<lista[i].second+1<<" "<<map1[value]+1;
            flag=1;
            break;
        }
        if(value==lista[i].first){
            if(map2.count(value)==1){
                cout<<lista[i].second+1<<" "<<map2[value]+1;
                flag=1;
                break;
            }
        }
     }
     if(flag==0){
        cout<<"IMPOSSIBLE";
     }
     return 0;
 }
