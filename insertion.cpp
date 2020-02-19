#include <iostream> 
using namespace std; 
void insertionSortRecursive(int arr[], int n) 
{  
	if (n <= 1) 
		return; 
	insertionSortRecursive( arr, n-1 );
	int last = arr[n-1]; 
	int j = n-2; 
	while (j >= 0 && arr[j] > last) 
	{ 
		arr[j+1] = arr[j]; 
		j--; 
	} 
	arr[j+1] = last; 
} 
void printArray(int arr[], int n) 
{ 
	for (int i=0; i < n; i++) 
		cout << arr[i] <<" "; 
} 
int main() 
{ 
    int *arr,n,i;
	cout<<"Enter the size of array :";
	cin>>n;
	cout<<"Enter the Array :";
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Given array is \n";
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";
	cout<<"The Sorted Array is \n";
	insertionSortRecursive(arr, n); 
	printArray(arr, n); 
    return 0; 
} 
