
#include <stdio.h>
#define PI 3.1415926
float s;
float circle;
void area(float r);
//上边的那个 s和circle是俩库函数
int main(void)
{
     char c;
    do{
    float r;
    scanf("%f",&r);
    area(r);
    printf("%.2f %.2f\n",s,circle);
    getchar();
    scanf("%c",&c);


    }while(c=='Y');
    return 0;
}
void area(float r){
    s = PI * r * r;
    circle = 2 * PI * r;
}
