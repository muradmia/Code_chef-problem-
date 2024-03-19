#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,x,y;
    cin>>t;
    for(int i = 0;i < t;i++){
        cin>>x>>y;
        if(x > y){
            cout<<0<<endl;
        }else{
            cout<<y/x<<endl;
        }
    }

    // cout<<30/10;
  
    return 0;
}