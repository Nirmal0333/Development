

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

        int CountTwo()
		{
			
			int iDigit = 0,iCnt = 0;
			
			while(iNo > 0)
			{
				iDigit = iNo % 10;
				if(iDigit == 4 )
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
   
    iRet = nobj.CountTwo();
	cout<<iRet<<endl;
	

	
	


    return 0;
}