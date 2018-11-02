#include<iostream>
using namespace std;
int find(int num){
	
int i,j,temp,count=0,arr[100],l=0;
int limit=num/2;
for(int i=1;i<=limit;i++){
	temp=num;
	j=i;
	while(j<temp)
	{temp=temp-j;j++; 
	  arr[l]=j;
	   l++;}
	if(j==temp){count++;}}	
	
return count;
	}
int main()
{
	int n;
	cin>>n;
int k=find(n);
	cout<<k;
	return 0;
	
}
