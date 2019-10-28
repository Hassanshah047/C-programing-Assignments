#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float amount, result;
    int choice;
    printf("Enter amount");
    scanf("%f", &amount);
    printf("Bit to Terabyte");
    printf("Terabyte to Bit");
    printf("Enter choice");
    scanf("%d", &choice);
    if(choice==3)
    {
        result=amount*8000000000000;
    }
    else if(choice==2)
    {
        result=amount/8000000000000;
    }
    printf("result=%f",result);
    return 0;
}
