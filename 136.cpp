#include<iostream>
using namespace std;

void strcpyX(char *src, char *dest)
{
        while(*src != '\0')
        {
			if(*src == ' ')
			{
				src++;
			}
			*dest = *src;
                src++;
                dest++;
        }
        *dest = '\0';
}

int main()
{
    char Arr[20] = "Marvel lous Pyt hon";   
    char Brr[20];

    

    strcpyX(Arr,Brr);

    cout<<"String after copy : "<<Brr<<endl;

    return 0;
}
