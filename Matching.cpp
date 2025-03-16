#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,i,j,z;
    long long int ans,x;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        map <int,vector<long long>> valores;
        //i-j=ai-aj -> ai-i=aj-j. Assim, guardamos em cada vetor os as que podem ser somados.
        //além disso, dessa forma cada vértice só pode aparecer em um dos vetores, evitando repetições de vértice.
        for(j=1;j<=n;j++){
            cin>>x;
            valores[x-j].push_back(x);
        }
        ans=0;
        for (const auto &it : valores){//esses dois fors são no total em ordem n, pois cada vértice só aparece uma vez em cada vetor.
            //os números nos vetores já estão em ordem crescente, pela natureza em que os armazenamos
            for(z=(int)it.second.size()-1;z>=1;z-=2){
                ans+=max((long long)0,it.second[z]+it.second[z-1]);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
