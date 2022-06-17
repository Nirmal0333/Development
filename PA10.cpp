

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;
		int iNo;
		

    public:
	    int iCnt = 0;
		int iNo1 = 0;
		
        
        ArrayX(int iValue)               
        {
            this->iSize = iValue;
            Arr = new int[iSize];       
        }

        ~ArrayX()                       
        {
            delete []Arr;               
        }
        
	    
		void Accept1()   
        {
            int iCnt = 0;
            cout<<"Enter the elements"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                    cin>>Arr[iCnt];
            }
        }
		
		void Accept()       
        {
            cout<<"Enter the element to calculate the frequency : "<<endl;
            cin>>iNo1;
			
        }
		
	    int FirstOccurance()
        {
            int iCnt = 0;
			

            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNo1)
				{
					
					break;
				}
            }
			
			if(iCnt == iSize)
			{
				return -1;
			}
			else
			{
				return iCnt;
			}
		
        }
};

int main()
{
    ArrayX obj1(5);
	bool iRet;

    obj1.Accept1();   
    obj1.Accept();           
    
    iRet = obj1.FirstOccurance();
    
	if(iRet == -1)
	{
		cout<<"There is no such element: "<<endl;
	}
	else
	{
		cout<<"The Element first occured at: "<<iRet<<endl;
	}
             
    return 0;
}