

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

        int SumEven()
		{
			int iDigit = 0;
			int iRev = 0;
			
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
			return iRev;
			
		}
};

int main()
{
    Number nobj;
	int iRet = 0;
	


    nobj.Accept();

	iRet = nobj.SumEven();
	cout<<iRet<<endl;
	


    return 0;
}