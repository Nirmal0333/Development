

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
		void Accept()       
        {
            cout<<"Enter the value of constructor : "<<endl;
            cin>>this->iNo;
        }
        
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
		
		int Minimum()
        {
            int iCnt = 0;
			int iMin = Arr[0];

            cout<<"Elements of array are "<<endl;
            for(iCnt = 0; iCnt< iSize; iCnt++)
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
	int iRet = 0;

    obj1.Accept();           
    obj1.Accept1();   
    
    iRet = obj1.Minimum();
    cout<<"Minimum number is: "<<iRet<<endl;	
             

 

    return 0;
}