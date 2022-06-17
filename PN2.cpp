// Template for probplems on Numbers

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;        // Charactristics

    public:
        // Behaviours
        void Accept()       // Setter
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }
		
		void Display()
		{
           int iCnt = 0;
		   for( iCnt = 0;  iCnt<iNo; iCnt++)
           {
              cout<<"Hello\n";      //  4
           }
		}   

       
};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.Display();

 

    return 0;
}