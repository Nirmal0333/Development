

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iValue)              
        {
            this->iSize = iValue;
            Arr = new int[iSize];       
        }

        ~ArrayX()                       
        {
            delete []Arr;               
        }

        void Accept()   
        {
            int iCnt = 0;
            cout<<"Enter the elements"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                    cin>>Arr[iCnt];
            }
        }

        
		
		bool Divisible()
		{
			int iCnt = 0,iSum = 0;
			
			for(iCnt = 0; iCnt < iSize; iCnt ++)
			{
				if(Arr[iCnt] == 11)
				{
					return true;
					break;
				}
			}
			
			
		}

        
};

int main()
{
    ArrayX obj1(5);

    obj1.Accept();   
    bool iRet = false;	
	
         
	

    iRet = obj1.Divisible();
    
	
	if(iRet == true)
	{
		cout<<"11 is present"<<endl;
	}
	else
	{
		cout<<"11 is not present"<<endl;
	}
    
	return 0;
}