#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    bool isPrime = true;
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
int main(){
    int n,m;
	cin>>n;
	cin>>m;
	for(int i=n+1;i<=m;i++)
{
    if (isPrime(i))
    {
        if (i==m) {
			cout<<"YES"; }
		else {
			cout<<"NO";}
    }
}
    return 0;
}
