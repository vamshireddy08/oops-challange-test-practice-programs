#include <iostream>
using namespace std;

void printArray(const int arr[], int n)
{
   for (int i=0; i<n; ++i)
     cout << arr[i] << " ";
   cout << "\n";
}

void heapify(int arr[], int n, int i)
{
   // Find largest among root, left child and right child
   int largest = i;
   int l = 2*i + 1;
   int r = 2*i + 2;

   if (l < n && arr[l] > arr[largest])
     largest = l;
   if (r < n && arr[r] > arr[largest])
     largest = r;
   // Swap and continue heapifying if root is not largest
   if (largest != i)
   {
     swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
   }

}

// main function to do heap sort
void heapSort(int arr[], int n)
{
   // Build max heap
   for (int i = n / 2 - 1; i >= 0; i--)
     heapify(arr, n, i);

   // Heap sort
   for (int i=n-1; i>=0; i--)
   {
     swap(arr[0], arr[i]);
     // Heapify root element to get highest element at root again
     heapify(arr, i, 0);
   }
}


int main()
{
  int arr[ ]={9,12,6,13,25,4,15,7,1,3,19};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout<<" n value is "<<n<<endl;
   printArray(arr, n);
   heapSort(arr, n);

   cout << "Sorted array is \n";
   printArray(arr, n);
}
