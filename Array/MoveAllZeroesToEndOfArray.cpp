/*Given an array of random numbers, Push all the zero’s of a given
 array to the end of the array. For example, if the given arrays is 
 {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to 
 {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements
should be same. Expected time complexity is O(n) and extra space 
is O(1).
Example:

Input :  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output : arr[] = {1, 2, 4, 3, 5, 0, 0};

Input : arr[]  = {1, 2, 0, 0, 0, 3, 6};
Output : arr[] = {1, 2, 3, 6, 0, 0, 0};
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter length of array: ";
	cin>>n;
	cout<<"Enter the elements of array: ";
	int ar[n],m=n-1;
	for(int i=0;i<n;i++)
		cin>>ar[i];
	
	for(int i=n-2;i>=0;i--){
		if(ar[i]==0){
			for(int j=i;j<n-1;j++){
				int temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++)
		cout<<ar[i]<<" ";
	
	
	return 0;
}



