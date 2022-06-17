

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;       

    public:
        int iCnt = 0;
		
        void Accept()       
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }

        void Display()      
        {
			 for(iCnt = 1; iCnt<= iNo; iCnt++)
             {
                 cout<<iCnt<<endl;        
             }
        }

        void Display1()
		{
			int iDigit = 0;
			if(iNo< 0)
			{
				iNo = -iNo;
			}
			while(iNo != 0)
			{
				iDigit = iNo % 10;
				cout<<iDigit<<endl;
				iNo = iNo /10;
			}
		
		}
		
		
		

};

int main()
{
    Number nobj;
	
	


    nobj.Accept();
    nobj.Display();
	nobj.Display1();


    return 0;
}