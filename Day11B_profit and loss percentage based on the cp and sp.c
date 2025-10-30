#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, percentage;

    // Input cost price and selling price
    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    // Check for profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
