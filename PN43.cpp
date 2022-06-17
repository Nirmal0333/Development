

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

        void DisplayNumbers()
		{
			
			int iDigit = 0;
			
			while(iNo != 0)
			{
				iDigit = iNo % 10;
				cout<<iDigit<<endl;
				iNo = iNo/10;
			}
			
			
					
		
			
			
     	}
	
};

int main()
{
    Number nobj;
	int iRet = 0;
	


    nobj.Accept();
   
    nobj.DisplayNumbers();
	

	
	


    return 0;
}