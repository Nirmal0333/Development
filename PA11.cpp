

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
		
	    int LastOccurance()
        {
            int iCnt = 0;
			

            
            for(iCnt = iSize-1; iCnt >= 0; iCnt--)
            {
                if(Arr[iCnt] == iNo1)
				{
					
					break;
				}
            }
			return iCnt;
			
        }
};

int main()
{
    ArrayX obj1(5);
	bool iRet;

    obj1.Accept1();   
    obj1.Accept();           
    
    iRet = obj1.LastOccurance();
    
	if(iRet == -1)
	{
		cout<<"There is no such element: "<<endl;
	}
	else
	{
		cout<<"The Element Last occured at: "<<iRet<<endl;
	}
             
    return 0;
}