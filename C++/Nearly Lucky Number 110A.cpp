#include<bits/stdc++.h>
using namespace std;

int main(){
	int lucky=0,len=0;
	long long int n;
	cin>>n;
	string s=to_string(n);
	len=s.length();
	for(int i;i < len; i++){
		if(s[i]=='4' || s[i]=='7'){
			lucky++;
		}
	}
	if(lucky==7 || lucky==4){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}