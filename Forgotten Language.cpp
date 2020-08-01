#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		char a[n][6];
		bool b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=false;
		}
		while(k--){
			int l;
			cin>>l;
			char d[l][6];
			for(int i=0;i<l;i++)
				cin>>d[i];
			for(int i=0;i<n;i++){
				for(int j=0;j<l;j++){
					if(a[i]==d[j]){	//strcmp(a[i],d[j])==0
						b[i]=true;
						break;
					}
				}
			}
			
		}
		for(int i=0;i<n;i++){
			if(b[i]==true)
				cout<<"YES"<<" ";
			else
				cout<<"NO"<<" ";
		}
		cout<<endl;
			
			
		
	}
	return 0;
}

