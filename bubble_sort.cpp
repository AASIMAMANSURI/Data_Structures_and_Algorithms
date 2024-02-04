#include<iostream>
using namespace std;

int main()
{
	
	int a[10];
	int size;
	
	cout<<"enter the size of the array:\n";
	cin>>size;
	
	for(int i=0; i<size ;i++)
	{
		cout<<"a["<<i<<"]: ";
		cin>>a[i];
	 } 
	 
	 
	 cout<<"the array which you have netred :\n";
	 for(int i=0; i<size ;i++)
	{
		cout<<"a["<<i<<"]: " <<a[i]<<endl;
		
	 } 

	// array shorting
	
	for (int i=0 ;i<size-1;i++)
	{
		for(int j =0; j<size- i-1 ;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp ;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"sorted array:\n";
	
	for(int i=0 ;i<size ;i++)
	{
		cout<<a[i]<<endl;
	}
}

