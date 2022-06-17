

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

        void DisplayPattern()
        {
                int i =0;

                for(i=1;i<=iRow; i++)
                {
                   
                    cout<<i<<"\t";
                    
                }
        }
};

int main()
{
    Pattern obj(5);
    obj.DisplayPattern();

    return 0;
}