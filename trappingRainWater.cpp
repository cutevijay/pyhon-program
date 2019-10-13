/*For a given array arr[] of 'n' non-negative integers representing height of blocks at index 'p' as 'Ap' where the width of each block is 1.The following program computes amount of water that can be trapped in between blocks when it rains.*/
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	    cout<<"Enter size of array:\n";
	    int n;
	    cin>>n;
	    int arr[n];
	    cout<<"enter "<<n<<" array elements:\n";
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int left[n];
            int right[n];
            int water = 0;
            left[0] = arr[0];
            for (int i = 1; i < n; i++)
            left[i] = max(left[i-1], arr[i]);
            right[n-1] = arr[n-1];
            for (int i = n-2; i >= 0; i--)
            	right[i] = max(right[i+1], arr[i]);
            for (int i = 0; i < n; i++)
           	water += min(left[i],right[i]) - arr[i];
	    cout<<"water traped= "<<water<<"\n";

	return 0;
}
