#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a,b,res=0,i,j;
    vector<pair<int,int>> v1,v2;
    freopen("speeding.in", "r", stdin);
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        v1.push_back({a,b});
    }
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        v2.push_back({a,b});
    }
    i=j=0;
    while(i<n&&j<m){
        if(v2[j].second>v1[i].second){
            if(res<v2[j].second-v1[i].second){
                res=v2[j].second-v1[i].second;
            }
        }
        if(v1[i].first>v2[j].first){
            v1[i].first=v1[i].first-v2[j].first;
            j++;
            continue;
        }
        if(v1[i].first<v2[j].first){
            v2[j].first=v2[j].first-v1[i].first;
            i++;
            continue;
        }
        if(v1[i].first==v2[j].first){
            i++;
            j++;
        }
    }
    freopen("speeding.out", "w", stdout);
    cout<<res;
}
