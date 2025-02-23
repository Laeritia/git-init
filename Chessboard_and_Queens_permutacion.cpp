#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

bool res[8][8];
int cont=0;
bool chosen[8];
vector <pair<int,int>> perms;

void searchp(int j){
    int flag=0;
    if(j==8){
        cont++;
    } else{
        for(int i=0;i<8;i++){
            if(chosen[i]||res[i][j])
                continue;
            for(int z=0;z<(int)perms.size();z++){
                if(abs(perms[z].first-i)==abs(perms[z].second-j)){
                    flag=1;
                }
            }
            if(flag==1){
                flag=0;
                continue;
            }
            chosen[i]=true;
            perms.push_back({i,j});
            searchp(j+1);
            chosen[i]=false;
            perms.pop_back();
        }
    }
}

int main(){
    int i,j;
    char c;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            cin>>c;
            if(c=='*'){
                res[i][j]=true;
            }
        }
    }
    searchp(0);
    cout<<cont;
    return 0;
}
