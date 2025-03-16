#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int alfabeto[26];
int outro_alfabeto[26];
int alfabeto_final[26];

int main(){
    int n,ascii,i,j;
    string a;
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        for(j=0;j<(int)a.size();j++){
            ascii=a[j];
            alfabeto[ascii-97]++;
        }
        cin>>a;
        for(j=0;j<(int)a.size();j++){
            ascii=a[j];
            outro_alfabeto[ascii-97]++;
        }
        for(j=0;j<26;j++){
            alfabeto_final[j]+=max(alfabeto[j],outro_alfabeto[j]);
            alfabeto[j]=0;
            outro_alfabeto[j]=0;
        }
    }
    for(i=0;i<26;i++){
        cout<<alfabeto_final[i]<<endl;
    }
    return 0;
}
