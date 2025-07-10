#include <bits/stdc++.h>

using namespace std;

int arr[101];

int main(){
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);
    int n,mini,maxi,i,caso=0,cont=0,ultnum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    i=0;
    while(i<n-1&&arr[i]<=arr[i+1]){
        i++;
    }
    if(i<n-1){
        mini=min(arr[i],arr[i+1]);
        maxi=max(arr[i],arr[i+1]);
        if(i!=0&&i!=n-2){
            if(mini<arr[i-1]){
                caso=1;
            }
            if(maxi>arr[i+2]){
                caso=2;
            }
        }
        if(i==0) caso=2;
        if(i==n-2&&n!=2) caso=1;
        if(caso==1){
            while(i>0&&arr[i-1]>mini){
                ultnum=arr[i];
                while(i>0&&arr[i-1]==ultnum) i--;
                cont++;
                i--;
            }
            if(arr[i]>mini) cont++;
        }
        if(caso==2){
            while(i<n-2&&arr[i+2]<maxi){
                ultnum=arr[i+1];
                while(i<n-2&&arr[i+2]==ultnum) i++;
                cont++;
                i++;
            }
            if(arr[i]<maxi) cont++;
        }
        cout<<cont;
    } else{cout<<"0";}
    return 0;
}
