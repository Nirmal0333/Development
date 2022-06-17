

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0


class Number
{
    private:
        int iNo;        

    public:
        
        void Accept()      
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }
		
		bool Display()
		{
		    if((iNo % 2) == 0)   
               {
                  return 1;
               }
               else
               {
                  return 0;
               }
		}

       
};

int main()
{
    Number nobj;
	int  bRet= 0;
 
	
    nobj.Accept();
    bRet = nobj.Display();

    if(bRet = 1)
	{
		cout<<"The number is even "<<endl; 
	}
	else
	{
		cout<<"The number is not even "<<endl;
	}

    return 0;
}