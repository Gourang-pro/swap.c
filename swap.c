#include<stdio.h>
#include<conio.h>
    int main()
{

int no1,no2;
void swap(int*,int*);

printf("ENTER THE NO 1--> ");
scanf("%d",&no1);

printf("ENTER THE NO 2--> ");
scanf("%d",&no2);

swap(&no1,&no2);
printf("%d\n%d",no1,no2);
return 0;

}
    void swap(int*no1,int*no2)
{
int temp;
temp=*no1;
*no1=*no2;
*no2=temp;
}