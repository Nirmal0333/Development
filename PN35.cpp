

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;  
        int iNo1;		

    public:
        int iCnt = 0;
		
        void Accept()       
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }
		
		void Accept1()       
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo1;
        }

        int Power()
		{
			int Mult = 1;
			int iCnt = 0;
			
			for(iCnt = 1; iCnt <= iNo1; iCnt++)
			{
				Mult = Mult * iNo;
			}
			return Mult;
			
		}
};

int main()
{
    Number nobj;
	int iRet = 0;
	


    nobj.Accept();
    nobj.Accept1();

	iRet = nobj.Power();
	cout<<iRet<<endl;
	


    return 0;
}