 

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
			char ch = '\0';
                for(iCnt = 1,ch = 'A'; iCnt <= iRow;iCnt++, ch++)
				{
					cout<<ch<<endl;
				}
        }
};

int main()
{
    Pattern obj(5);
    obj.DisplayPattern();

    return 0;
}