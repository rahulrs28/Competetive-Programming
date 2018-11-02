#include<iostream>
using namespace std;
void search(int [],int,int);
int main()
{
	 int arr[] = {1, 1, 8, 4, 4, 5, 5, 6, 6};
	 int len=9;
	 search(arr, 0, len-1);
	return 0;
}
void search(int arr[],int low,int high )
{
	 if (low > high)
       return;
 
    if (low==high)
    {
       cout<< "The required element is  "<< arr[low];
        return;
    }
 
 
    int mid = (low + high) / 2;
    if (mid%2 == 0)
    {
        if (arr[mid] == arr[mid+1])
            search(arr, mid+2, high);
        else
            search(arr, low, mid);
    }
    else  
    {
        if (arr[mid] == arr[mid-1])
            search(arr, mid+1, high);
        else
            search(arr, low, mid-1);
    }
}
