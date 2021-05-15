#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,x,i,j;
    string s;
    cin>>n>>x;
    cin>>s;
    for(j=0; j<x; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }

    }
    cout<<s;
    return 0;
}