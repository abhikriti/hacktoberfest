#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//a utility function to print the heap
void print(int arr[],int n)
{
	for(int i=0; i <n; i++)
	{
		cout<<arr[i]<<" ";
	}
}


// To heapify a subtree rooted with node i
void heapify(int arr[], int n, int i) 
{ 
	int largest = i; // Initialize largest as root 
	int l = 2 * i + 1; // left = 2*i + 1 
	int r = 2 * i + 2; // right = 2*i + 2 

	// If left child is larger than root 
	if (l < n && arr[l] > arr[largest]) 
		largest = l; 

	// If right child is larger than largest so far 
	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	// If largest is not until make it root 
	if (largest != i) { 
		swap(arr[i], arr[largest]); 

		// Recursively heapify the affected sub-tree 
		heapify(arr, n, largest); 
	} 
} 

void deletenode(int arr[] , int& n)
{
//    get the last element/
      int last_element = arr[n-1];
	  
//	  swap the root with last
      arr[0] = last_element;
	  
//	  decrease the size of heap by 1;
      n = n-1;
	  
//	  heapify the root node
      heapify(arr,n,0);      
}

//driver code to test the program
int main()
{
	int arr[] = {10,5,3,2,4};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	deletenode(arr,n);
	
	print(arr,n);
	
	return 0;
}
