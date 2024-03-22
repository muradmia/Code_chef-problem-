#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,x,y,z;
    cin>>t;
    for(int i = 0;i < t;i++){
        cin>>x>>y>>z;
        int res = x * y;
        if(res / 2 < z){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
 
  return 0;
}