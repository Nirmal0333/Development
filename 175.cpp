#include<iostream>
using namespace std;

template<class T>
T Min(T Arr[],int Size)
{
	
	
	int Min = Arr[0];
	
	for(int i = 0;i<Size;i++)
	{
		if(Arr[i]<Min)
		{
			Min = Arr[i];
		}
	}
	return Min;
}
int main()
{
	int arr[] = {10,20,30,40,50};
	float brr[] = {10.0,3.7,9.8,8.7};
	
	int iRet = Min(arr,5);
	cout<<iRet<<endl;
	
	float fRet = Min(brr,4);
	cout<< fRet ;
	
	return 0;
}