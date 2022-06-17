

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

        int SumNonFactors()
		{
			
			int iCnt = 0, iSum = 0;
			
			for(iCnt = 1; iCnt <= iNo; iCnt++)
			{
				if((iNo % iCnt) != 0)
				{
					iSum = iSum + iCnt;
				}
					
			}
			return iSum;
			
     	}
	
};

int main()
{
    Number nobj;
	int iRet = 0;
	


    nobj.Accept();
   

	iRet = nobj.SumNonFactors();
	cout<<iRet<<endl;

	
	


    return 0;
}