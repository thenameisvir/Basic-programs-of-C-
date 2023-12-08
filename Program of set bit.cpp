#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int ans = 0, i = 0;
    int mask = 1 << k;
    int r = n | mask;
    cout << r << " ";
    return 0;
}
