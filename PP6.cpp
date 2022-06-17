-4   -3  -2  -1  0   1   2   3   4

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
        
		  void Display()
        {
                int i =0;

                for(i=-iRow;i<=iRow; i++)
                {
                   
                    cout<<i<<"\t";
                    
                }
        }
};

int main()
{
    Pattern obj(5);
    obj.Display();

    return 0;
}