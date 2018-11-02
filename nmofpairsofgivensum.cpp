#include<iostream>
using namespace std;
int main()
{ 
  int arr[]={1,2,3,4,6};
  int i=0,j=4,k=10,l,h=0,n=5;
 while(n>0)
  {
  	if((arr[i]+arr[j])%k==0) 
  	     { cout<<(arr[i]+arr[j])<<" "; cout<<"i="<<i<<"j= "<<j<<endl;
		   h++;i++;j--;}
  	     else
  	     if((arr[i]+arr[j])<k)
  	     i++;
  	     else if((arr[i]+arr[j])>k)
  	     j--;
  	     
  	     n--;
	  }
  

cout<<(h/2);


}
