

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

        int Display1()
		{
			int iDigit = 0;
			int iCnt = 0;
			
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			while(iNo > 0)
			{
				
				iCnt++;
				iNo = iNo /10;
			}
			return iCnt;
			
		
		}
		
		
		

};

int main()
{
    Number nobj;
	int iRet = 0;
	


    nobj.Accept();

	iRet = nobj.Display1();
	cout<<iRet<<endl;


    return 0;
}