#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0,i=0;
    int count = 0;
    while(n!=0){
        int bit = n&1;
        ans = bit*pow(10,i)+ans;
        n = n>>1;
        i++;
    }
    while(ans!=0){
        int bit = ans%10;
        if(bit==1){
            count++;
        }
    }
    cout<<count<<" ";
}
