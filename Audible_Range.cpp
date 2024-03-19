#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes hereif
    int t,n;
    cin>>t;
    for(int i = 0;i < t;i++){
        cin>>n;
        if(n >= 67 & n <= 45000){
            cout<<"YES\n";
        }else {
            cout<<"NO\n";
        }
    }

    return 0;
}