#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int x1,y1,x2,y2,a1,a2,b1,b2,intervalo1,intervalo2,flag=0,flag2=0;
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    cin>>x1>>y1>>x2>>y2;
    cin>>a1>>b1>>a2>>b2;
    if((a1<=x1&&x1<=a2)&&a2<=x2){
        intervalo1=a2-x1;
        flag=1;
    }
    if((a1<=x2&&x2<=a2)&&(x1<=a1&&flag==0)){
        intervalo1=x2-a1;
    }
    if(x1<a1&&x2>a2){
        intervalo1=a2-a1;
        flag2=1;
    }
    if(a1<x1&&x2<a2){
        intervalo1=x2-x1;
    }
    if(x2<a1||a2<x1){
        intervalo1=0;
    }

    flag=0;

    if((b1<=y1&&y1<=b2)&&b2<=y2){
        intervalo2=a2-x1;
        flag=1;
    }
    if((b1<=y2&&y2<=b2)&&(y1<=b1&&flag==0)){
        intervalo2=y2-b1;
    }
    if(y1<b1&&y2>b2){
        intervalo2=b2-b1;
        flag2=1;
    }
    if(b1<y1&&y2<b2){
        intervalo2=y2-y1;
    }
    if(y2<b1||b2<y1){
        intervalo2=0;
    }
    if(intervalo1==0||intervalo2==0){
        cout<<abs((x2-x1)*(y2-y1));
        flag=2;
    }
    if((intervalo1==(x2-x1)||intervalo2==(y2-y1))&&flag2==0){
        if(intervalo1==(x2-x1)){
            cout<<abs((x2-x1)*(abs(y2-y1)-abs(intervalo2)));
        } else{
            cout<<abs((y2-y1)*(abs(x2-x1)-abs(intervalo1)));
        }
        flag=3;
    }
    if(flag!=2&&flag!=3){
        cout<<abs((x2-x1)*(y2-y1));
    }
    //esse código tá respirando por aparelhos kkkk
}
