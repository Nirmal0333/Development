

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

        void DisplayFactors()
		{
			
			int iCnt = 0;
			
			for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
			{
				if((iCnt % 2) == 0)
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
   

	nobj.DisplayFactors();
	
	


    return 0;
}