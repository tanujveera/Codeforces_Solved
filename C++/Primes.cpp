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
	bool flag=false;
	cin>>n;
	cin>>m;
	if(isPrime(n)==true && isPrime(m)==true){
		flag=true;
	}
	for(int i=n+1;i<=m;i++)
{
    if ((isPrime(i)==true) && (flag=true))
    {
        if (i==m) {
			cout<<"YES";
			break; }
		else {
			cout<<"NO";}
    }
/*	else{
		cout<<"NO";

	}*/
}
    return 0;
}