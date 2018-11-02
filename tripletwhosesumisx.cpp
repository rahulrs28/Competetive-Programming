#include<iostream>
using namespace std;
int main(){
 int arr[100],l,r,n,sum;
 cin>>n;
 for(int i=0;i<n;i++) cin>>arr[i];
 //sort the array or used sorted array
 cin>>sum;
 r=n-1;
 for(int i=0;i<n-2;i++){
 	l=i+1;
 	while(r>l)
 	{
 		if(arr[i]+arr[l]+arr[r]==sum)
 		   cout<<"Triplet : "<<arr[i]<<","<<arr[l]<<","<<arr[r];
 		   
 	}
 		   
 		   if(arr[i]+arr[l]+arr[r]>sum)
 		     r--;
 		     else
 		     l++;
	 }
 	
return 0;	
	
}
