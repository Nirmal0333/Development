#include<iostream>
using namespace std;

int Addition(int No1,int No2)
{
	int Ans = 0;
	Ans = No1+No2;
	return Ans;
}
int Addition(float No1,float No2)
{
	float Ans = 0;
	Ans = No1+No2;
	return Ans;
}
int main()
{
	int x = 10,y = 11,ret = 0;
	ret = Addition(x,y);
	cout<<"Additon is:"<<ret<<"\n";
	
	float a = 10.8,b = 11.5,fret = 0.0;
	fret = Addition(a,b);
	cout<<"Additon is:"<<fret<<"\n";
	return 0;
}