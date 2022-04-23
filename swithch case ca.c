#include <stdio.h>
    int main() {
        int num;
        printf("Enter the number ");
        scanf("%d",&num);

        switch (num) {
            case 7:
                printf("Value is 7");
                break;
            case 8:
                printf("Value is 8");
                break;
            case 9:
                printf("Value is 9");
                break;
            default:
                printf("Out of range");
                break;
        }
        return 0;
    }
