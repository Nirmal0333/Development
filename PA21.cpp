

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

        
		
		int Frequency()
		{
			int iCnt = 0;
			int iMin = Arr[0];
			
			for(iCnt = 0; iCnt < iSize; iCnt ++)
			{
				if(iMin > Arr[iCnt])
				{
					iMin = Arr[iCnt];
				}
			}
			return iMin;
			
		}

        
};

int main()
{
    ArrayX obj1(5);

    obj1.Accept();   
    int iRet = 0;	
	
         
	

    iRet = obj1.Frequency();
    cout<<iRet<<endl;
    return 0;
}