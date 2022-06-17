

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
			int i = 0, j = 0;
			
		        for(i=1;i<=iRow; i++)
                {
                    for(j =1; j<=iCol; j++)
                    {
						if((i == j) ||(i == 1) ||(i == iRow)||(j == 1)||(j == iCol))
						{
							cout<<"*\t";
						}
						else 
						{
							if(i>j)
							{
								cout<<"&\t";
							}
							else
							{
								cout<<"$\t";
							}
						}
												
					}
					cout<<endl;
				}
                
        }
};

int main()
{
    Pattern obj(6,6);
    obj.DisplayPattern();

    return 0;
}