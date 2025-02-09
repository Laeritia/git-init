#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,p=1,res=0,flag=0,i=0;
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    cin>>x>>y;
    while(x!=y&&flag==0){
        if(i%2==0){
            if(x+p>=y&&x<y){
                res=res-(x+p-y);
                flag=1;
            }
        } else{
            if(x-p<=y&&x>y){
                res=res-(y-(x-p));
                flag=1;
            }
        }
        i++;
        res=res+p+p/2;
        p=2*p;
    }
    cout<<res;
}
