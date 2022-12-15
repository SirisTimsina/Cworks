// display area and parameter of a circle using functions
#include<stdio.h>
const double PI = 3.1415;
// function declaration and difinition when used before main
double getArea(int r){
    double area = PI * r * r ;
    return area;
}

double perimeter(int r){
    double peri = 2 *PI * r ;
    return peri;
}

int main(){
    int r; 
    double a, p;
    printf("Enter radius of a circle: ");
    scanf("%d", &r);
    // call functions that return a value
    a = getArea(r);
    p = perimeter(r);
    printf("The area of circle is %lf\n", a);
    printf("The perimeter of circle is %lf\n", p);
    return 0;
}