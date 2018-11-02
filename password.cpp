#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,1,1,0,0,1,0,1,1,0,0,0,0,1,1,1,0,1,0,0,0,1,1,1,0,1,0,1,1,1,0,1,1,0,0}; 
	int z=0,o=0;
	for(int i=0;i<35;i++)
	{
		if(arr[i]==0)
		  z++;
		  else
		  o++;
	}
	cout<<z<<" "<<o;
}
