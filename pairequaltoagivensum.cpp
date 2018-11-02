#include<iostream>
using namespace std;
int main()
{
int arr[100],sum,n;
cin>>n>>sum;
//cout<<sum<<endl<<n;

for(int i=0;i<n;i++)
  cin>>arr[i];
  int low=0;
  int high=n-1;
  for(int i=0;i<n;i++){
   if(arr[low]+arr[high]>sum)
  	  {cout<<low<<" "<<high<<endl; high--;}
  	   else
  	   if(arr[low]+arr[high]<sum)
  	   {
		 cout<<low<<" "<<high<<endl;
  	   low++;}
  	   	if(arr[low]+arr[high]==sum)
  	   cout<<"Indices are :"<<low<<" "<<high;
  }
	}
