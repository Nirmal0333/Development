#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr,int iSize)
{
	int i = 0;
	
	for(i = iSize;i>0;i--)
	{
		cout<<arr[i]<<"\t";
	}
	
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	for(int i = 0;i<9;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	Reverse(arr,9);
	
	return 0;
}

