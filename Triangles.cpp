#include <cstdio>
#include <bits/stdc++.h>


using namespace std;

int poste[100][2];

int main(){
    int n,i,area=0,am,z,j;
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>poste[i][0]>>poste[i][1];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(poste[i][0]==poste[j][0]){
                for(z=0;z<n;z++){
                    if(z==j||z==i){
                        continue;
                    }
                    if(poste[i][1]==poste[z][1]){
                        am=(poste[i][1]-poste[j][1])*(poste[i][0]-poste[z][0]);
                        if(am<0){
                            am=-am;
                        }
                        if(am>area){
                            area=am;
                        }
                    }
                }
            }
        }
    }
    cout<<area;
    return 0;
}
