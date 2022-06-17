#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow, iCol;

    public:
        Pattern(int a, int b)
        {
            this->iRow = a;
            this->iCol = b;
        }

        void DisplayPattern()
        {
                int i =0, j = 0;
				

                for(i=1;i<=iRow; i++)
                {
                    for(j =1; j<=iCol; j++)
                    {
						
						if(j == 1)
						{
							cout<<"*\t";
						}
						else if(i == j)
						{
							cout<<"*\t";
						}
						else if(j == iCol)
						{
							cout<<"*\t";
						}
						else
						{
							cout<<"\t";
						}
						
						
					}
					cout<<endl;
                }
				cout<<endl;
        }
		
		void DisplayPattern1()
        {
                int i =0, j = 0;
				

                for(i=1;i<=iRow; i++)
                {
                    for(j =1; j<=iCol; j++)
                    {
				        if((i == 1)||(i == iRow)||(iCol >= iRow))
						{
							cout<<"*\t";
						}
						
						else
						{
							cout<<"\t";
						}
					
						
						
					}
					cout<<endl;
                }
        }
};

int main()
{
    Pattern obj(5,5);
    obj.DisplayPattern();
    obj.DisplayPattern1();

    return 0;
}