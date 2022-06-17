

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

        bool CheckPrime()      
        {
			int iFactCnt = 0;
			 for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
             {
                 if(iNo % iCnt == 0)
				 {
					 break;
				 }					 
             }
			 if(iCnt == (iNo/2)+1)
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
		cout<<"it is prime number: "<<endl;
	}
	else
	{
		cout<<"it is not prime number: "<<endl;
	}


    return 0;
}