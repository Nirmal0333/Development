

#include<iostream>
using namespace std;



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
		    if(
              ((iNo % 3) == 0) &&
              ((iNo % 5) == 0)
               )
               {
                  return true;
               }
               else
               {
                  return false;
               }
		}

       
};

int main()
{
    Number nobj;
    bool bRet = false;
	
    nobj.Accept();
    bRet = nobj.Display();

    if(bRet = true)
	{
		cout<<"The number is divisible by 3 & 5"<<endl; 
	}
	else
	{
		cout<<"The number is not divisible by 3 & 5 "<<endl;
	}

    return 0;
}