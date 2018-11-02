#include<iostream>
using namespace std;
int main()
{
	int arr[]={10,2,4,8,7,9,4,5};
	int a[10],b[10],c[10],d[10];
	int r,n=8,k=0;
	cin>>r;
	for(int i=0;i<(n-r);i++)
	{ a[i]=arr[i];
	}
	
	for(int i=n-r;i<n;i++)
	{ b[k]=arr[i]; k++;
	}
	k=0;

	for(int i=0;i<r;i++){ cout<<b[i]<<" ";	} 
	
for(int i=0;i<n-r;i++)
{ cout<<a[i]<<" ";}
	return 0;	
}

