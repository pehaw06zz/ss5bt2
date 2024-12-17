#include <stdio.h>

int main() {
    int predefinedNumber = 7; 
    int userInput;

    printf("chuong trinh doan so hay nhap tu 1-10 .\n");
    printf("hay nhap mot so cho den khi trung so da nhap truoc!\n");

    do {
        printf("nhap so cua ban: ");
        scanf("%d", &userInput);

        if (userInput != predefinedNumber) {
            printf("sai roi hay thu lai.\n");
        }
    } while (userInput != predefinedNumber);

    printf("da chon dunhg so %d.\n", predefinedNumber);

    return 0;
}
