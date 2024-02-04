#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int size;
	
	cout<<"enter the size of the array:\n";
	cin>>size;
	
	cout<<"enter the elements of the array:\n";
	for (int i=0 ; i<size ;i++)
	{
		cout<< "a["<<i<<"]";
		cin>>a[i];
	}
	int key;
	cout<<"enter the element to search:\n";
	cin>>key;
	
	// logic for binary search
	
	int low ,heigh,mid;
	low = 0;
	heigh = size-1;

	
	while(low <= heigh)
	{
		mid = (low + heigh)	/2;
		if(a[mid] == key)
		{
			cout<<"element is found at a:["<<mid<<"] position" ;
			return 0;
			
		}	
			else if(key > a[mid])
			{
				low = mid +1;
			}
			
			else {
				heigh = mid -1;
			}
		
//			return -2;
	}
	cout<<"element is not there in this array..";

}
