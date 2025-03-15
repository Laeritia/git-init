#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,i,n,j;
    double d,h,y1,area=0,y2;
    //freopen("billboard.in", "r", stdin);
    //freopen("billboard.out", "w", stdout);
    cin>>t;
    for(i=0;i<t;i++){
        area=0;
        cin>>n>>d>>h;
        cin>>y1;
        for(j=0;j<n-1;j++){
            cin>>y2;
            if(y2<y1+h){
                area=area+(h*d)/2-(h+y1-y2)*(h+y1-y2)*d/(h*2.0);
            } else{
                area=area+(h*d)/2;
            }
            y1=y2;
        }
        area=area+h*d/2;
        cout<<fixed << setprecision(7) <<area<<"\n";
    }
}
