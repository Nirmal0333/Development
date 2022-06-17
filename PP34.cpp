 

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
			int iCnt = 0;
			
                for(iCnt = 1; iCnt <= iRow;iCnt++)
				{
					if((iCnt % 2) == 0)
					{
						cout<<iCnt<<"\t";
					}
				}
        }
};

int main()
{
    Pattern obj(8);
    obj.DisplayPattern();

    return 0;
}