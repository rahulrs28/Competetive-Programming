#include<iostream>
using namespace std;
int main(){
int arr[100],freq[100],count;
int n;
cin>>n;
for(int i=0;i<n;i++){
	cin>>arr[i];
	freq[i]=-1;
}	
for(int i=0;i<n;i++){
	
count=1;
for(int j=i+1;j<n;j++){
	if(arr[i]==arr[j]){
		count++;
		freq[j]=0;
	}
}
if(freq[i]!=0)
freq[i]=count;	
	}
	for(int i=0;i<n;i++){
		if(freq[i]!=0f)
cout<<"Frequency of "<<arr[i]<<" is "<<freq[i]<<endl;
}
	
	
}
