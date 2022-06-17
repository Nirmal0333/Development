//Nested structures
#include<stdio.h>
#include<conio.h>
struct name
{
	char first_name[20];
	char last_name[20];
};
struct phonebook_entry
{
	struct name person_name;
	char mobile_no[15];
};
int main()
{
	struct phonebook_entry p1,p2;
	printf("Enter the details of the first person:\n");
	printf("Enter the first name of the person:\t");
	gets(p1.person_name.first_name);
	printf("Enter the last name of the person:\t");
	gets(p1.person_name.last_name);
	printf("Enter the mobile number:\t");
	gets(p1.mobile_no);
	
	
	printf("Enter the details of the first person:\n");
	printf("Enter the first name of the person:\t");
	gets(p2.person_name.first_name);
	printf("Enter the last name of the person:\t");
	gets(p2.person_name.last_name);
	printf("Enter the mobile number:\t");
	gets(p2.mobile_no);
	
	
	printf("\nRecords in the phone book are:\n");
	printf("------------------------------\n");
	printf("%s%s:\t%10s\n",p1.person_name.first_name,p1.person_name.last_name,p1.mobile_no);
	printf("%s%s:\t%10s\n",p2.person_name.first_name,p2.person_name.last_name,p2.mobile_no);
}