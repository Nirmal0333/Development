

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

        void DisplayF()      
        {
			 for(iCnt = 1; iCnt<= iNo; iCnt++)
             {
                 cout<<iCnt<<endl;        // 4
             }
        }

        void DisplayB()      
        {
			 for(iCnt = iNo; iCnt>= 1; iCnt--)
             {
                 cout<<iCnt<<endl;        // 4
             }
        }

};

int main()
{
    Number nobj;


    nobj.Accept();
    nobj.DisplayF();

    nobj.DisplayB();


    return 0;
}