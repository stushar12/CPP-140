#include<bits/stdc++.h>>
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
	        if((i%2==0 && s[i]=='0')||(i%2!=0 && s[i]=='1'))              //following 01010101010.... pattern
	      	 c1++;  							 //0 at even places and 1 at odd places
	        
            else if((i%2==0 && s[i]=='1')||(i%2!=0 && s[i]=='0'))            //following 101010101010.... pattern
	        c2++;								//1 at even places and 0 at odd places
	    }
	   int mini =min(c1,c2);			//minimum swaps
	   cout<<mini<<endl;
	}
	return 0;
}
