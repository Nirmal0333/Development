

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

        int CntEven()
		{
			
			int iDigit = 0,iCnt = 0;
			
			while(iNo > 0)
			{
				iDigit = iNo % 10;
				if((iDigit % 2 ) == 0)
				{
					iCnt++;
				}
				iNo = iNo/10;
			}
			return iCnt;
			
			
					
		
			
			
     	}
	
};

int main()
{
    Number nobj;
	int iRet = 0;
	


    nobj.Accept();
   
    iRet = nobj.CntEven();
	cout<<iRet<<endl;
	

	
	


    return 0;
}