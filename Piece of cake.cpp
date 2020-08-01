#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		int arr[26];
		cin>>s;
		for(int i=0;i<26;i++)
			arr[i]=0;
		for(int j=1;j<=s.length();j++)
		for(int i=1;i<=26;i++){
			if(i==s[j-1]-96){
				arr[i-1]++;
				break;
			}
		}
		int m=0,sum=0;
		for(int i=0;i<26;i++){
			if(arr[i]>m)
				m=arr[i];
			sum=sum+arr[i];
		}
		sum=sum-m;
		if(sum==m)
			cout<<"YES"<<endl;
		else
		 	cout<<"NO"<<endl;
	}
	return 0;
}

