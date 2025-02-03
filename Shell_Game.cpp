
#include <bits/stdc++.h>

using namespace std;

int arr[4];
int main()
{
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n;
    cin>>n;
    int a,b,g,tr;
    for(int i=0;i<n;i++){
        cin>>a>>b>>g;
        tr=arr[a];
        arr[a]=arr[b];
        arr[b]=tr;
        arr[g]++;
    }
    int maximo=0;
    for(int i=1;i<4;i++){
        if(arr[i]>maximo){
            maximo=arr[i];
        }
    }
    cout<<maximo<<endl;
    return 0;
}
