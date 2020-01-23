#include<bits/stdc++.h>
using namespace std;
int getOddOccurrence(int arr[], int arr_size) 
{ 
    for (int i=0;i<arr_size;i++) {        
        int count=0;          
        for (int j=0;j<arr_size;j++) 
        { 
            if (arr[i]==arr[j]) 
                count++; 
        } 
        if (count%2!=0) 
            return arr[i]; 
    } 
    return -1; 
}
int main()
{
	int n;
	int arr[n];
	cout<<"Enter number of elements :";
	cin>>n;
	cout<<"Enter Elements :";
	cin>>arr[n];
	cout<<getOddOccurrence(arr,n);
	return 0;
}
