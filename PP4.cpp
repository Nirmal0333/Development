 

#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;

    public:
        Pattern(int a)
        {
            this->iRow = a;
            
        }

        void DisplayF()
        {
                int i =0;

                for(i=1;i<=iRow; i++)
                {
                   
                    cout<<i<<"\t";
                    
                }
        }
		
		
        void DisplayB()
        {
                int i =0;

                for(i=iRow;i>=1; i--)
                {
                   
                    cout<<i<<"\t";
                    
                }
        }
};

int main()
{
    Pattern obj(5);
    obj.DisplayF();
    obj.DisplayB();

    return 0;
}