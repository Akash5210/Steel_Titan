/*Given an array of n elements. Our task is to write a program to 
rearrange the array such that elements at even positions are 
greater than all elements before it and elements at odd positions 
are less than all elements before it.
Examples:
Input : arr[] = {1, 2, 3, 4, 5, 6, 7}
Output : 4 5 3 6 2 7 1

Input : arr[] = {1, 2, 1, 4, 5, 6, 8, 8} 
Output : 4 5 2 6 1 8 1 8
*/

//#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cout<<"Enter length of array: ";
	cin>>n;
	cout<<"Enter the elements of array: ";
	int ar[n],br[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		br[i]=ar[i];
	}
	sort(br,br+n);      //using STL of c++
	
	int evenPos=n/2;
	int oddPos=n-evenPos;
	int j=oddPos-1;
	for(int i=0;i<n;i+=2){
		ar[i]=br[j];
		j--;
	}	
	j=oddPos;
	for(int i=1;i<n;i+=2){
		ar[i]=br[j];
		j++;
	}
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	
	return 0;
}
