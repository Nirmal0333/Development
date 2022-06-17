

#include<iostream>
using namespace std;


class Number
{
    private:
        int iNo;       

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

        int SumFactors()
		{
			int iCnt = 0;
			int iSum = 0;
			
			for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
			{
				if((iNo % iCnt) == 0)
				{
					iSum = iSum + iCnt;
				}
			}
			
			if(iSum == iNo)
		    {
			   return 1;
		    }
		    else
		    {
			   return 0;
		    }
		
		}
		
		

};

int main()
{
    Number nobj;
	bool iRet;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.SumFactors();
	
	if(iRet == true)
	{
		cout<<"It is perfect number: ";
	}
	else
	{
		cout<<"It is not perfect number: ";
	}

    return 0;
}