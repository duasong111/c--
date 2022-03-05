#include <stdio.h>

int main()  
{                 //这个写的并不标准的。
    struct book          // book 则是结构名                           
    {
        char name;
        float price;
        int pages;
    };   //可以在此来定义这个东西 比如book1 = {"大聪明"，“很厉害”，“1233”};，其实这样的定义是完全符合的             //其实这部分还有不同的表述方式。
    char buffer[255];

    struct book b1, b2;
    printf("Enter the Name, Price and Pages of Book 1: ");
    scanf_s(" %c %f %d", &b1.name, &b1.price, &b1.pages);
    printf("Enter the Name, Price and Pages of Book 2: ");
    scanf_s(" %c %f %d", &b2.name, &b2.price, &b2.pages);
    printf("Here is the data you've entered: \n");
    printf("Name: %c Price: %f Pages: %d\n", b1.name, b1.price, b1.pages);
    printf("Name: %c Price: %f Pages: %d\n", b2.name, b2.price, b2.pages);

    return 0;
}
