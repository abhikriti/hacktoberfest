//radhe radhe
//Immortal IIITM
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

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

//Function to build max_heap from given array.
void make_heap(int arr[] , int n)
{
//	the index of last leaf node.

	int last_index = ( n/2 ) - 1;
	
//	Recursively heapifying each node to get the level order traversal
//intially treating last_index as the root.

	for(int i = last_index ; i>=0 ; i--)
	{
		heapify(arr,n,i);
	}
}

void print_heap(int arr[], int n) 
{ 
  
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
 
int main()
{
    int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 }; 
	int n = sizeof(arr) / sizeof(arr[0]);
	
	make_heap(arr,n);
	
	print_heap(arr,n);
	
	return 0;
}
