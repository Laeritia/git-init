#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n,flag=0,cont=0;
    cin>>n>>s;
    vector<char> novo;
    for(int i=0;i<n;i+=2){
        if(s[i]=='G'&&s[i+1]=='H'){
            novo.push_back('q');
        }
        if(s[i]=='H'&&s[i+1]=='G'){
            novo.push_back('j');
        }
    }
    while(!novo.empty()){
        if(!flag){
            while(!novo.empty()&&novo[(int)novo.size()-1]=='j'){
                novo.pop_back();
            }
        } else{
            while(!novo.empty()&&novo[(int)novo.size()-1]=='q'){
                novo.pop_back();
            }
        }
        if(novo.empty()){
            break;
        }
        cont++;
        if(flag==1){
            flag=0;
        } else{flag=1;}
    }
    cout<<cont;
    return 0;
}
