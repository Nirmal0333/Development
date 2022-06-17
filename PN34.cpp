

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

        bool ChkPallindrome()
		{
			int iDigit = 0;
			int iRev = 0;
			int iTemp = 0;
			
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			while(iNo > 0)
			{
				iDigit = iNo % 10;
				iRev = iRev * 10 + iDigit;
				iNo = iNo / 10;
			}
			if(iRev == iTemp)
			{
				return true;
			}
			else
			{
				return false;
			}
			
		}
};

int main()
{
    Number nobj;
	bool bRet;
	


    nobj.Accept();

	bRet = nobj.ChkPallindrome();
	
	if(bRet == true)
	{
		cout<<"It is pallindrome number<<endl: ";
		
	}
	else
	{
		cout<<"It is not pallindrome number"<<endl;
	}
	


    return 0;
}