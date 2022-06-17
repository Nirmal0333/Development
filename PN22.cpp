

#include<iostream>
using namespace std;


class Number
{
    private:
        int iNo; 
        int iCnt = 0;
		bool bFlag = true;
		

    public:
        
        void Accept()       
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }

        bool Display()      
        {
            cout<<"Value is : "<<this->iNo<<endl;
        }

        bool CheckPrime()
		{
			
			int iSum = 0;
			
			for(iCnt = 2;iCnt <= (iNo/2); iCnt++)
			{
				if(iNo % iCnt == 0)
				{
					bFlag = false;
					break;
				}
			}
	        return bFlag;
		}
};

int main()
{
    Number nobj;
	bool bRet;

    nobj.Accept();
    nobj.Display();

    bRet = nobj.CheckPrime();
	
	if(bRet == true)
	{
		cout<<"It is prime number: ";
	}
	else
	{
		cout<<"It is not prime number: ";
	}

    return 0;
}