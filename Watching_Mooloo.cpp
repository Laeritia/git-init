#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i;
    long long int k,ans=0;
    long long int dia[100000];
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>dia[i];
    }
    sort(dia,dia+n);
    ans=k;
    for(i=0;i<n-1;i++){
        if(dia[i+1]-dia[i]+1<k+2){
            ans=ans+dia[i+1]-dia[i];
        } else{
            ans=ans+k+1;
        }
    }
    ans++;
    cout<<ans;
    return 0;
}
