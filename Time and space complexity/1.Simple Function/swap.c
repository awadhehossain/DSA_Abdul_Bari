void swap(int *a,int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
}

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("The previous value of a is %d\n",a);
    printf("The previous value of b is %d\n",b);

    swap(&a,&b);

    printf("The Swaping value of a is %d\n",a);
    printf("The Swaping value of b is %d\n",b);
    return 0;

}
