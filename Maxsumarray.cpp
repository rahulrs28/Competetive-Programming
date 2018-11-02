#include<iostream>
using namespace std;
int main()
{
	int arr[]={0,5,-10,4,1,0,-8,-2,5,6,-3};
	int n=11;
	int max=arr[0],sum=0,start=0,end=0,s=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		if(sum>max)
		{ max=sum;
		 start=s; end=i;
		}
		if(sum<0)
		{ sum=0;
		  s=i+1;
		}
	}
cout<<max<<endl;
cout<<start<<"/"<<end;	
	
}
