

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

        void DisFactors()
		{
			
			int iCnt = 0;
			
			for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
			{
				if((iNo % iCnt) == 0)
				{
					cout<<iCnt<<endl;
				}
					
			}
			
     	}
	
};

int main()
{
    Number nobj;
	int iRet = 0;
	


    nobj.Accept();
   

    nobj.DisFactors();
	
	
	


    return 0;
}