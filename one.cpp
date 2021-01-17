#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    string s;
	    cin>>s;
	    int c1=0;
	    int c2=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(i%2==0 && s[i]=='0')c1++;
	        else if(i%2!=0 && s[i]=='1')c1++;
            if(i%2==0 && s[i]=='1')c2++;
	        else if(i%2!=0 && s[i]=='0')c2++;	        
	    }
	   int mini =min(c1,c2);
	   cout<<mini<<endl;
	}
	return 0;
}
