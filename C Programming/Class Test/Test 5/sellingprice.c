//wap to calculate selling price of book base on cost price and discount 
#include <stdio.h>

void sellingbook(char book[], int bamount);

void main() {
    char book[20];
    int bamount;

    printf("Enter a book name: ");
    scanf("%s", book);  

    printf("Enter book amount: ");
    scanf("%d", &bamount);

    sellingbook(book, bamount);
}

void sellingbook(char book[], int bamount) {
    if (bamount >= 1000) {
        float dis = 10.0;
        float samount = bamount - (bamount * (dis / 100)); 
        printf("Your book name: %s\n", book);
        printf("Discount applied: %f%%\n", dis);
        printf("Total selling price: %f\n", samount);
    } else {
        printf("No discount applied. Your book price is: %d\n", bamount);
    }
}
