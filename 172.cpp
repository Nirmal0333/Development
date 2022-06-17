#include<iostream>
using namespace std;

template<class T>
T Max(T no1, T no2,T no3)
{
	T Max = no1;
	
	if(no2 > Max)
	{
		return no2;
	}
	else if(no3 > Max)
	{
		return no3;
	}
	else
	{
		return -1;
	}
	
	
}
int main()
{
	int iRet = Max(10,20,30);
	cout<<"Maximum number is"<<iRet<<endl;
	
	float fRet = Max(10.0,20.0,99.9);
	cout<<"Maximum number is"<<fRet<<endl;
	
	return 0;
	
}