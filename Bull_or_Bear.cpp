#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,a,b;
    cin>>t;
    for(int i = 0;i < t;i++){
       cin>>a>>b;
       if(a == b){
        cout<<"NEUTRAL\n";
       }else if(a > b){
            cout<<"LOSS\n";
       }else{
            cout<<"PROFIT\n";
       }
    }
    return 0;
}