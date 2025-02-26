#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector <pair<int,int>> cows;
vector <int> comfort;
vector <pair<int,int>> conditioners;
vector <int> custo;
vector <int> power;
vector <int> perms;
int chosen[10];
int m,n,minimo=1000000;

bool check(void){
    int flag=0;
    vector <int> cold(101);
    int soma=0;
    for(int i=0;i<101;i++){
        cold[i]=0;
    }
    for(int i=0;i<101;i++){
        for(int j=0;j<(int)perms.size();j++){
            if(i>=conditioners[perms[j]].first&&i<=conditioners[perms[j]].second){
                cold[i]=cold[i]+power[perms[j]];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=cows[i].first;j<=cows[i].second;j++){
            if(cold[j]<comfort[i]){
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1){
        return false;
    }
    if(flag==0){
        for(int i=0;i<(int)perms.size();i++){
            soma=soma+custo[perms[i]];
        }
        if(minimo>soma){
            minimo=soma;
        }
    }
    return true;
}

void searchp(int index){
    if(check()||index==m){
        return;
    } else{
        searchp(index+1);
        perms.push_back(index);
        searchp(index+1);
        perms.pop_back();
    }

}

int main(){
    int s,t,c,a,b,p,i,po;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>s>>t>>c;
        cows.push_back({s,t});
        comfort.push_back(c);
    }
    for(i=0;i<m;i++){
        cin>>a>>b>>p>>po;
        conditioners.push_back({a,b});
        power.push_back(p);
        custo.push_back(po);
    }
    searchp(0);
    cout<<minimo;
    return 0;
}
