#include<iostream>
using namespace std;
int main()
{ int arr[100],n,temp;
  cin>>n;
  for(int i=0;i<n;i++)
  cin>>arr[i];
  int s=0,e=n-1;
  while(e>s)
  { temp=arr[s];
   arr[s]=arr[e];
   arr[e]=temp;
   s++,e--;
  }
   for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
	
}
