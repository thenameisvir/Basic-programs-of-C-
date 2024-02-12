
#include<iostream>
using namespace std;
bool checkprime(int n){
if(n<=1) return false;
for(int i=2;i<n;i++){
  if(n%i==0){
    return false;
  }
}
return true;
}
void getprime(int n){
  int count = 0;
  int num = 2;
  while(count<n){
    if(checkprime(num)){
      count++;
      cout<<num<<endl;
    }
    num++;
  }

}
int main(){
  int n;
  cin>>n;
  getprime(n);

}