#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans = 0,o = n,i=0;
  while(o!=0){
    int bit = o%10;
    ans = ((ans*10)+bit);
    o/=10;
  i++;
  }
  cout<<ans;
}