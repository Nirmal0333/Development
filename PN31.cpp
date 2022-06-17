

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;       

    public:
        int iCnt = 0;
		
        void Accept()       
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }

        void DisplayEven()
		{
			int iDigit = 0;
			
			
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			while(iNo > 0)
			{
				iDigit = iNo % 10;
				if((iDigit % 2) == 0)
				{
				   cout<<iDigit<<endl;
				}   
				iNo = iNo /10;
			}
			
		}
};

int main()
{
    Number nobj;
	int iRet = 0;
	


    nobj.Accept();

	nobj.DisplayEven();
	


    return 0;
}