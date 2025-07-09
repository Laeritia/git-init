#include <bits/stdc++.h>

using namespace std;

struct logo{
    int x,y;
    char c;
};

int main(){
    logo a,b,c;
    int flag=0;
    cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
    a.c='A';
    b.c='B';
    c.c='C';
    if(a.x<a.y) swap(a.x,a.y);
    if(b.x<b.y) swap(b.x,b.y);
    if(c.x<c.y) swap(c.x,c.y);
    if(a.x==b.x&&a.x==c.x){
        if(a.y+b.y+c.y==a.x){
            cout<<a.x<<endl;
            for(int i=0;i<a.y;i++){
                for(int j=0;j<a.x;j++){
                    cout<<a.c;
                }
                cout<<endl;
            }
            for(int i=0;i<b.y;i++){
                for(int j=0;j<b.x;j++){
                    cout<<b.c;
                }
                cout<<endl;
            }
            for(int i=0;i<c.y;i++){
                for(int j=0;j<c.x;j++){
                    cout<<c.c;
                }
                cout<<endl;
            }
        } else{cout<<-1<<endl;}
        flag=1;
    }
    if(flag==0){
        if(c.x>b.x) swap(b,c);
        if(b.x>a.x) swap(a,b);
        if(b.x==a.x-a.y) swap(b.x,b.y);
        if(c.x==a.x-a.y) swap(c.x,c.y);
        if(b.x+c.x==a.x&&b.y==a.x-a.y&&c.y==a.x-a.y){
            cout<<a.x<<endl;
            for(int i=0;i<a.y;i++){
                for(int j=0;j<a.x;j++){
                    cout<<a.c;
                }
                cout<<endl;
            }
            for(int i=0;i<a.x-a.y;i++){
                for(int j=0;j<a.x;j++){
                    if(j<b.x){
                        cout<<b.c;
                    } else cout<<c.c;
                }
                cout<<endl;
            }
        } else{cout<<-1<<endl;}
    }
    return 0;
}

/*int n,i,Q,q;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++){cin>>arr[i];}
    sort(arr.begin(),arr.end());
    vector<int>::iterator low,up;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++){
        for(q=0;q<=8000;q++){
            low=lower_bound(arr.begin(),arr.begin()+i+1,q-4000);
            up=upper_bound(arr.begin(),arr.begin()+i+1,q-4000);
            mat[i][1][q]=up-low;
            if(q==4004){
                cout<<mat[i][1][q]<<" "<<i<<endl;
            }
        }
    }
    for(q=3990;q<=4030;q++){
        for(i=0;i<n-1;i++){
            mat[i+1][2][q]=mat[i][2][q];
            if(q-arr[i+1]-4000>=0)
                mat[i+1][2][q]+=mat[i][1][q-arr[i+1]-4000];
            cout<<mat[i+1][2][q]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<mat[7][2][4008]<<endl;
    for(q=3990;q<=4030;q++){
        for(i=0;i<n-1;i++){
            mat[i+1][3][q]=mat[i][3][q];
            if(q-arr[i+1]-4000>=0)
                mat[i+1][3][q]+=mat[i][2][q-arr[i+1]-4000];
            cout<<mat[i+1][3][q]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(q=3990;q<=4030;q++){
        for(i=0;i<n-1;i++){
            mat[i+1][4][q]=mat[i][4][q];
            if(q-arr[i+1]-4000>=0)
                mat[i+1][4][q]+=mat[i][3][q-arr[i+1]-4000];
            cout<<mat[i+1][4][q]<<" ";
        }
        cout<<endl;
    }
    int num;
    cin>>Q;
    for(i=0;i<Q;i++){
        cin>>num;
        cout<<mat[n-1][4][num+4000];
    }*/
