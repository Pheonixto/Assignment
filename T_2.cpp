#include <iostream>
using namespace std;

// Linear Search
int LinSearch(int arr[] , int size, int key)
{
   for(int i=0; i<size; i++)
   {
     if( key==arr[i])
	 {
	 	return i;
		 }	
   }
   
   return -1;
	
}

// Main
int main() {
	
	int userValue,n,arr[55];
	
	//Accepting inputs from users.
	cout<<"Enter the number : " <<endl;
	cin>>n;
	
	cout<<"Enter Element in the array: " <<endl;
	 for(int i=0; i<n; i++){
	 	cin>>arr[i];
	 }
	 
	 cout<<"Enter the number your are searching for : " <<endl;
	 cin>>userValue;
	
	// Printing out result 
	 int Result = LinSearch(arr, n , userValue);
	 
	 if(Result>=0)
	 {
	 cout<<"The number " << arr[Result] <<" was found at position " << Result+1 <<endl;	
	 }
	
	else
	{
		cout<<"Element " << arr[Result] << " was not found" <<endl;
	}
	return 0;
}
