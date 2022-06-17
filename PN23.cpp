

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
			 for(iCnt = 1; iCnt<= (iNo/2); iCnt++)
             {
                 if(iNo % iCnt == 0)
				 {
					 iFactCnt++;
				 }					 
             }
			 return iFactCnt;
        }

};

int main()
{
    Number nobj;
	int iRet = 0;


    nobj.Accept();
    nobj.DisplayF();

    iRet = nobj.CountFactor();
	cout<<iRet<<endl;


    return 0;
}