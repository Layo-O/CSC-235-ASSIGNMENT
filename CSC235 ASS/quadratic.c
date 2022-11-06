#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    float root1,root2,d;
    printf("Enter value for a \n");
    scanf("%f", &a);
    printf("Enter value for b \n");
    scanf("%f", &b);
    printf("Enter value for c \n");
    scanf("%f",&c);

    d = b*b - 4*a*c;
    if (d>0){
        root1 = -b+sqrt (d)/(2*a);
        root2 = -b-sqrt (d)/(2*a);
        printf("The roots = %f %f", root1, root2);
    }
    else if (d= 0){
        root1 = -b/(2*a);
        root2 = -b/(2*a);
        printf("The root is equal = %f %f", root1, root2);
    }
    else
        printf("the roots are imaginary %s");

    return 0;
    
}