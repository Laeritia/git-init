#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector <string> vacas{"Bessie", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Buttercup", "Sue"};
vector <pair<string,string>> restricoes;
vector <bool> condicao;

int main(){
    int n,i,j,flag;
    string a,b,lixo;
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>lixo>>lixo>>lixo>>lixo>>b;
        restricoes.push_back({a,b});
    }
    sort(vacas.begin(),vacas.end());
    for(i=0;i<n;i++){
        condicao.push_back(false);
    }
    do{
        for(i=0;i<n;i++){
            condicao[i]=false;
        }
        for(i=0;i<n;i++){
            for(j=0;j<7;j++){
                if((restricoes[i].first==vacas[j]&&restricoes[i].second==vacas[j+1])||(restricoes[i].first==vacas[j+1]&&restricoes[i].second==vacas[j])){
                   condicao[i]=true;
                   break;
                }
            }
        }
        flag=0;
        for(i=0;i<n;i++){
            if(condicao[i]==false){
                flag=1;
                break;
            }
        }
    } while(next_permutation(vacas.begin(),vacas.end())&&flag==1);
    //nesse caso, a permutação é feita uma vez a mais que o necessário. Ajeitando:
    lixo=vacas[7];
    vacas[7]=vacas[6];
    vacas[6]=lixo;
    for(i=0;i<8;i++){
        cout<<vacas[i]<<endl;
    }
    return 0;
}
