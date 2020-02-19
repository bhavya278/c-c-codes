#include<iostream> 
using namespace std; 
int getMax(int h[], int n) 
{ 
	int max = h[0]; 
	for (int i = 1; i < n; i++) 
		if (h[i] > max) 
			max = h[i]; 
	return max; 
}  
void countSort(int h[], int n, int exp) 
{ 
	int output[n]; 
	int i, count[10] = {0}; 
	for (i = 0; i < n; i++) 
		count[ (h[i]/exp)%10 ]++; 
	for (i = 1; i < 10; i++) 
		count[i] += count[i - 1]; 
	for (i = n - 1; i >= 0; i--) 
	{ 
		output[count[ (h[i]/exp)%10 ] - 1] = h[i]; 
		count[ (h[i]/exp)%10 ]--; 
	} 
	for (i = 0; i < n; i++) 
		h[i] = output[i]; 
} 
void radixsort(int h[], int n) 
{
	int m = getMax(h, n);  
	for (int exp = 1; n/exp > 0; exp *= 10) 
		countSort(h, n, exp); 
} 
void print(int n[], int h) 
{ 
	for (int i = 0; i < h; i++) 
		cout << n[i] << " "; 
} 
int main() 
{ 
	int *y,m,i;
	cout<<"Enter the size of array :";
	cin>>m;
	cout<<"Enter the array :";
	for(i=0;i<m;i++)
	cin>>y[i];
	cout<<"Give Array is :";
	for(i=0;i<m;i++)
	cout<<y[i]<<' ';
	radixsort(y, m);
	cout<<"Sorted Array is \n"; 
	print(y, m); 
	return 0; 
} 
