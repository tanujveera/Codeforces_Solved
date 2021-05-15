#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int l=0,u=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]>='a' && s[i]<='z'){
			l++;
		}
		if(s[i]>='A' && s[i]<='Z'){
			u++;
		}
	}
if(u>l){
	transform(s.begin(),s.end(),s.begin(),::toupper);
}
else{
transform(s.begin(),s.end(),s.begin(),::tolower);
}
cout<<s<<endl;
	return 0;
}