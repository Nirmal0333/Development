#include<iostream>
using namespace std;

void strcpyX(char *src, char *dest)
{
        while(*src != '\0')
        {
			if((*src >= 'A') &&(*src <= 'Z'))
			{
				*src = *src + 32;
                
			}
			*dest = *src;
                src++;
                dest++;
        }
        *dest = '\0';
}

int main()
{
    char Arr[20] = "Marvellous Python 2";   
    char Brr[20];  

    

    strcpyX(Arr,Brr);

    cout<<"String after copy : "<<Brr<<endl;

    return 0;
}
