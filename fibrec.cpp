#include<iostream>
using namespace std;
int fib(int);
int main()
{

	int n;
	cin>>n;
		//cout<<"0 1 ";
	fib(n);

}
int fib(int n)
{
	int next=1,prev=0,sum=0;
	while(n>1){
		sum=next+prev;
		prev=next;
		next=sum;
	
	cout<<sum<<" ";
	fib(n-1);n--;}
	return 0;
	
}
