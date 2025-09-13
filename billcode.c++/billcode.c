#include <stdio.h>

#define GST_RATE 0.18

int main() {
    char itemName[50];
    int quantity;
    float unitPrice, subtotal, gst, total;
    
    printf("Enter item name: ");
    scanf("%s", itemName);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    subtotal = quantity * unitPrice;
    gst = subtotal * GST_RATE;
    total = subtotal + gst;

    printf("\n--- BILL ---\n");
    printf("Item: %s\n", itemName);
    printf("Quantity: %d\n", quantity);
    printf("Unit Price: %.2f\n", unitPrice);
    printf("Subtotal: %.2f\n", subtotal);
    printf("GST @18%%: %.2f\n", gst);
    printf("Total Amount: %.2f\n", total);
    return 0;
}
