

#include<iostream>
using namespace std;

#define TRUE 1
#define False 0
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

        bool ChkNumbers()
		{
			
			int iDigit = 0;
			
			while(iNo != 0)
			{
				iDigit = iNo % 10;
				if(iDigit == 0)
				{
					return 1;
					break;
				}
				
				
				
				iNo = iNo/10;
			}
			
			
			
					
		
			
			
     	}
	
};

int main()
{
    Number nobj;
	bool iRet;
	


    nobj.Accept();
   
    iRet = nobj.ChkNumbers();
	
	if(iRet == 1)
	{
		cout<<"It contains zero"<<endl;
	}
	else
	{
		cout<<"There is no Zero"<<endl;
	}

	
	


    return 0;
}