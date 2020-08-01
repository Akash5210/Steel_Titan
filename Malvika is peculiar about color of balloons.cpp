#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length(),c1=0,c2=0;
		for(int i=0;i<n;i++){
			if(s[i]=='a')
				c1++;
			else
				c2++;
		}
		if(c1==0 || c2==0)
			cout<<0<<endl;
		else if(c1>=c2)
			cout<<c2<<endl;
		else if(c1<c2)
			cout<<c1<<endl;
	}
	return 0;
}

