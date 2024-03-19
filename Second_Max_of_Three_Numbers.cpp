#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,a,b,c;
    cin>>t;
    for(int i = 0;i < t;i++){
        cin>>a>>b>>c;
        int max,second_max;
        max = a;
        second_max = b > c ? b : c;
        if(b > c && b > a){
            max = b;
            second_max = a > c ? a : c;
        }

        if(c > a && c > b){
            max = c;
            second_max = a > b ? a : b;
        }

        cout<<second_max<<endl;


    }
    return 0;
}