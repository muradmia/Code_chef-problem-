#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int t,x,y;
    cin>>t;
   
   for(int i = 0;i < t;i++){
    int count = 0;
    cin>>x>>y;
     for(int i = x;i< y;i++){
        count++;
    }
        cout<<count<<"\n";
   }
  
}
