// ex03 - C3

#include <stdio.h>

int main(void){

    int gsi, groupId, publisherCode, itemNbr, checkDgt;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &groupId, &publisherCode, &itemNbr, &checkDgt);

    printf("\nGS1 prefix: %d\n", gsi);
    printf("Group identifier: %d\n", groupId);
    printf("Publisher Code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNbr);
    printf("Check digit: %d\n", checkDgt);

    return 0;
}