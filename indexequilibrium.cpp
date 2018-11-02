#include<iostream>
using namespace std;
//write a function to find the index else it will return the last index also . Ex for that case is arr={-7 1 5 2 -4 3 0}
int main(){
	int arr[100],n,sum=0,lsum=0;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++){sum=sum+arr[i];}
	for(int i=0;i<n;i++){
		sum=sum-arr[i];
		cout<<"sum="<<sum<<endl;
		cout<<"lsum="<<lsum<<endl;
		if(lsum==sum)
		  cout<<i<<" "<<endl;
		lsum=lsum+arr[i];
	}
	
}
