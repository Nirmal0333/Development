#include<iostream>
using namespace std;

template<class T>
T Max(T Arr[],int Size)
{
	
	
	int Max = Arr[0];
	int i = 0;
	for(int i = 0;i<Size;i++)
	{
		if(Arr[i]>Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}
int main()
{
	int arr[] = {10,20,30,40,50};
	float brr[] = {10.0,3.7,9.8,8.7};
	
	int iRet = Max(arr,5);
	cout<<iRet<<endl;
	
	float fRet = Max(brr,4);
	cout<<fRet<<endl;
	
	return 0;
}