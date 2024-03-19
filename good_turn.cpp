#include<iostream>
using namespace std;
int main(){

  int t,x,y;
  cin>>t;
  for(int i = 0;i < t;i++){
    cin>>x>>y;
    if(x+y == 6){
        cout<<"NO\n";
    }else if(x+y < 6){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
  }
    return 0;
}