#include<stdio.h>
void main()
{
double INCOME,TAX;
printf("ENTER THE INCOME OF A PERSON : ");
scanf("%lf",&INCOME);
if(INCOME<=1400000)
{
TAX=0;
}
else if(INCOME>1400000 && INCOME<=1600000)
{
TAX=(INCOME-1400000)/4;
}
else if(INCOME>1700000 && INCOME<=2000000)
{
TAX=(((INCOME-1700000)/10)*2)+30000;
}
else if(INCOME>20000000)
{
TAX=(((INCOME-20000000)/10)*3)+130000;
}
printf("THE INCOME TAX PAYABLE OF A PERSON IS : %.2lf",TAX);
return 0;
}
