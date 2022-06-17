

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;  
        	

    public:
        int iCnt = 0;
		
  
		
		void Accept1()       
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo1;
        }

        int Power()
		{
			int Mult = 1;
			int iCnt = 0;
			
			for(iCnt = 1; iCnt <= iNo1; iCnt++)
			{
				Mult = Mult * iNo;
			}
			return Mult;
			
		}
		bool CheckArmstrong()
		{
			int iTemp = 0;
			int iDigitCnt = 0, iDigit = 0,iSum = 0;
			
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			
			iTemp = iNo;
			
			while(iNo != 0)
			{
				iDigit++;
				iNo = iNo / 10;
			}
			
			iNo = iTemp;
			
			while(iNo != 0)
			{
				iDigit = iNo % 10;
				iSum = iSum + Power(iDigit , iDigitCnt);
				iNo = iNo / 10;
			}
			
			if(iSum == iTemp)
			{
				return true;
			}
			else
			{
				return false
			}
		}
};

int main()
{
    Number nobj;
	bool iRet;
	


    nobj.Accept();
    nobj.Accept1();

	iRet = nobj.Power();
	
	if(iRet == true)
	{
		cout<<"It is armstrong number"<<endl;
	}
	else
	{
		cout<<"It is not armstrong number"<<endl;
	}
	


    return 0;
}