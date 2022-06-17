

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

        void DisplayF()      
        {
			 for(iCnt = 1; iCnt<= iNo; iCnt++)
             {
                 cout<<iCnt<<endl;        
             }
        }

        int CountFactor()      
        {
			int iFactCnt = 0;
			 for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
             {
                 if(iNo % iCnt == 0)
				 {
					 iFactCnt++;
				 }					 
             }
			 return iFactCnt;
        }
		
		bool CheckPrime()
		{
		   int iRet = 0;
		   iRet = CountFactor();
		   if(iRet = 0)
		   {
			  return true;
		   }
		   else
		   {
			  return false;
		   }
		}

};

int main()
{
    Number nobj;
	
	bool bRet;


    nobj.Accept();
    nobj.DisplayF();

    bRet = nobj.CheckPrime();
	
	if(bRet == true)
	{
		cout<<"it prime number: "<<endl;
	}
	else
	{
		cout<<"it not prime number: "<<endl;
	}


    return 0;
}