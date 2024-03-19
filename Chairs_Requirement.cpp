#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,a,b;
    cin>>t;
    for(int i = 0;i < t;i++){
       cin>>a>>b;

       if(a==b){
            cout<<0<<endl;
       }else if(a < b){
            cout<<0<<endl;
       }else{
            cout<<a-b<<endl;
       }
        
    }
    return 0;
}