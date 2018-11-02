#include<iostream>
using namespace std;
int main(){
	int arr[100],n,l,r,temp;
	cin>>n;
	cout<<"Enter the array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	l=0;r=n-1;
	for(int i=0;i<n;i++){
		if(arr[l]>arr[r])
		 { temp=arr[i]; arr[i]=arr[r];arr[r]=temp; l++;
		 }
		 else
		 r--;
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
