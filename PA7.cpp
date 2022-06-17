

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
		
		int Frequency()
        {
            int iCnt = 0;
			int iFrequency = 0;

            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(iNo1 == Arr[iCnt])
				{
					iFrequency++;
				}
            }
			return iFrequency;
        }

       

      
};

int main()
{
    ArrayX obj1(5);
	int iRet = 0;

    obj1.Accept1();   
    obj1.Accept();           
    
    iRet = obj1.Frequency();
    cout<<"Frequency is: "<<iRet<<endl;	
             

 

    return 0;
}