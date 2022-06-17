

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
		
	    bool Search()
        {
            int iCnt = 0;
			bool bFlag = false;

            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNo1)
				{
					bFlag = true;
					break;
				}
            }
			return bFlag;
        }

       

      
};

int main()
{
    ArrayX obj1(5);
	bool iRet;

    obj1.Accept1();   
    obj1.Accept();           
    
    iRet = obj1.Search();
    
	if(iRet == true)
	{
		cout<<"Element is there in array: "<<iRet<<endl;
	}
	else
	{
		cout<<"Element is not there: "<<endl;
	}
             
    return 0;
}