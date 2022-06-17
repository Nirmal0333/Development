

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

        int SumDigits()
		{
			int iDigit = 0;
			int iSum = 0;
			
			if(iNo > 0)
			{
				iNo = -iNo;
			}
			while(iNo > 0)
			{
				iDigit = iNo % 10;
				iSum = iSum + iDigit; 
				iNo = iNo /10;
			}
			return iSum;
			
		
		}
		
		
		

};

int main()
{
    Number nobj;
	int iRet = 0;
	


    nobj.Accept();

	iRet = nobj.SumDigits();
	cout<<iRet<<endl;


    return 0;
}