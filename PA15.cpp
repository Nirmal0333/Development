

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

        
		
		void Divisible()
		{
			int iCnt = 0;
			
			for(iCnt = 0; iCnt < iSize; iCnt ++)
			{
				if((Arr[iCnt] % 11) == 0)
				{
					cout<<Arr[iCnt]<<endl;
				}
			}
			
		}

        
};

int main()
{
    ArrayX obj1(5);

    obj1.Accept();      
	
         
	

    obj1.Divisible();

    return 0;
}