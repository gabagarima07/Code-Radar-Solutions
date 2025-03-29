// Your code here...
#include<stdio.h>
int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else{
        return(num*factorial(num - 1));

    }

}
int main()
{
    int num;
    printf("enter the number you want factorial of:\n");
    scanf("%d",&num);
    printf("the factorial of %d is %d",num,factorial(num));
    return 0;

}

    


