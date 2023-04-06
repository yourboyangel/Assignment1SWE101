#include <stdio.h>
#include <stdlib.h>
double average(){
    int n,sum=0,num;
    double avg;
    printf("Enter the number of numbers you want to find the average of: \n");
    scanf("%d",&n);
    printf("Enter the numbers: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        sum+=num;
    }
    avg=(double)sum/n;
    return avg;
}
int main()
{
    printf("Insert a if you want to find the average: \n");
    char method;
    scanf("%c",&method);
    if(method=='a')
        printf("Average of given numbers is: %.2lf",average());
    return 0;
}
