

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
		
		int Maximum()
        {
            int iCnt = 0;
			int iMax = 0;

            cout<<"Elements of array are "<<endl;
            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
                if(iMax < Arr[iCnt])
				{
					iMax = Arr[iCnt];
				}
            }
			return iMax;
        }

       

      
};

int main()
{
    ArrayX obj1(5);
	int iRet = 0;

    obj1.Accept();           
    obj1.Accept1();   
    
    iRet = obj1.Maximum();
    cout<<"Maximum number is: "<<iRet<<endl;	
             

 

    return 0;
}