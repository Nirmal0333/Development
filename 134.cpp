#include<iostream>
using namespace std;

void strcatX(char *src, char *dest)
{
       while(*src != '\0')
        {
            src++;
        }

        while(*dest != '\0')
        {
            *src = *dest;
            src++;
            dest++;
        }
        *src = '\0';
}

int main()
{
    char Arr[50] = "Marvellous Infosystems";
    char Brr[20] = "Logic Building";

    

    strcatX(Arr,Brr);

    cout<<"String after concatination : "<<Arr<<endl;

    return 0;
}
