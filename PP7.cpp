

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

                for(i=1;i<=iRow; i++)
                {
					if((i % 2) == 0)
					{
						cout<<"*\t";
					}
					else
					{
						cout<<i<<"\t";
					}
                   
                    
                    
                }
        }
};

int main()
{
    Pattern obj(5);
    obj.Display();

    return 0;
}