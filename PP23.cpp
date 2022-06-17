/*

a
a   b
a   b   c
a   b   c   d

*/


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
				char ch = '\0';

                for(i=1;i<=iRow; i++)
                {
                    for(j =1, ch = 'a'; j<=iCol; j++,ch++)
                    {
                      if(i>=j)
					  {
						  cout<<ch<<"\t";
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
    Pattern obj(4,4);
    obj.DisplayPattern();

    return 0;
}