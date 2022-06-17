

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;        

    public:
        
        void Accept()       
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }

        void Display()      
        {
            cout<<"Value is : "<<this->iNo<<endl;
        }

        int SumFactors()
		{
			int iCnt = 0;
			int iSum = 0;
			
			if(iNo < 0)
            {
                iNo = -iNo;
            }
			
			for(iCnt = 1; iCnt < iNo/2; iCnt++)
			{
				if((iNo % iCnt) == 0)
				{
					iSum = iSum + iCnt;
				}
			}
		
};		

int main()
{
    Number nobj;
	bool bRet;

    nobj.Accept();
    nobj.Display();

    bRet = nobj.SumFactors();
	
	if(bRet == true)
	{
		cout<<"It is perfect number"<<endl;
	}
	else
	{
		cout<<"It is not perfect number"<<endl;
	}

    return 0;
}