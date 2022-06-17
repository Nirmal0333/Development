

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

        int CntOdd()
		{
			
			int iDigit = 0,iSum = 1;
			
			while(iNo > 0)
			{
				iDigit = iNo % 10;
				if((iDigit % 2) != 0)
				{
				   iSum = iSum * iDigit;
				  
				}
				iNo = iNo/10;
			}
			return iSum;
			
			
					
		
			
			
     	}
	
};

int main()
{
    Number nobj;
	int iRet = 0;
	


    nobj.Accept();
   
    iRet = nobj.CntOdd();
	cout<<iRet<<endl;
	

	
	


    return 0;
}