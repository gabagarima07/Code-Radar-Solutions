// Your code here...
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int total = a+b+c;
    float average = total/3.0;
    printf("Average: %.2f",average);
    return 0;

}