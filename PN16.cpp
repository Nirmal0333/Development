

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

        void Display()      
        {
            cout<<"Value is : "<<this->iNo<<endl;
        }

        int SumFactors()
		{
			int iCnt = 0;
			int iSum = 0;
			
			for(iCnt = 1;iCnt < iNo; iCnt++)
			{
				if((iNo % iCnt) == 0)
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
    nobj.Display();

    iRet = nobj.SumFactors();
	cout<<"Sum is: "<<iRet<<endl;

    return 0;
}