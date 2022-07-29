#include<stdio.h>
int main()
{
    int day,month,year;
    printf("ENTER DATE IN DD/MM/YYYY FORMATE\n ");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day-%d , Month-%d , Year-%d" , day,month,year);
    return 0;
}