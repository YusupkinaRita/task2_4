#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a+b)<=c || (c+b)<=a || (a+c)<=b)
    printf("error");
    else{
        if(a>b && a>c){
            if ((b*b+c*c)==(a*a))
            printf("right triangle");
            if ((b*b+c*c)>(a*a))
            printf("acute triangle");
            if ((b*b+c*c)<(a*a))
            printf("obtuse triangle");
            }
        if(b>a && b>c){
            if ((a*a+c*c)==(b*b))
            printf("right triangle");
            if ((a*a+c*c)>(b*b))
            printf("acute triangle");
            if ((a*a+c*c)<(b*b))
            printf("obtuse triangle");
            }
        if(c>b && c>a){
            if ((b*b+a*a)==(c*c))
            printf("right triangle");
            if ((b*b+a*a)>(c*c))
            printf("acute triangle");
            if ((b*b+a*a)<(c*c))
            printf("obtuse triangle");
            }
        }
 return 0;
}