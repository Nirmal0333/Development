#include<iostream>
using namespace std;

void strrevX(char *str)
{
     char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    while(start < end)
    {
           temp = *start;
           *start = *end;
           *end = temp;

           start++;
           end--;
    }
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[20];

    

    strrevX(Arr);

    cout<<"Reverse String is : "<<Arr<<endl;

    return 0;
}
