// ax^2 + bx + c = 0
// find the roots of quadratic equation
// d = b^2 -4ac 
#include<stdio.h>
#include<math.h>

int main(){
    double a , b , c, d;
    printf("Enter co-efficients of quadratic equation:\n");
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);
    // calcualte d
    d = pow(b, 2)  -  4 * a * c;
    double root1,root2;
    if(d == 0){   // in this case we have same two roots
        root1 = -b/(2 * a);
        printf("Root is %lf \n", root1);
    }else if(d > 0){  // in this case we have two real roots
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b + sqrt(d)) / (2 * a);
        printf("Roots are: %.2lf and %.2lf \n", root1, root2);
    }else{
        // roots are imaginary
        printf("Roots are: \n");
        printf("%.2lf + i %.2lf \n", -b/(2*a) , sqrt(fabs(d))/(2*a));
         printf("%.2lf - i %.2lf \n", -b/(2*a) , sqrt(fabs(d))/(2*a));
    }
return 0;
}