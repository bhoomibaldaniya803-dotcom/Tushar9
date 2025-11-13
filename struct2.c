#include <stdio.h>
#include <string.h>

struct customer {
    int acc_no;
    char name[50];
    float balance;
};

void print_low_balance(struct customer c[], int n) {
    printf("\nCustomers with balance below Rs.100:\n");
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 100) {
            printf("Account No: %d, Name: %s, Balance: %.2f\n", c[i].acc_no, c[i].name, c[i].balance);
        }
    }
}

void transaction(struct customer c[], int n, int acc_no, float amt, int code) {
    for (int i = 0; i < n; i++) {
        if (c[i].acc_no == acc_no) {
            if (code == 1) { 
                c[i].balance += amt;
                printf("Deposited %.2f successfully. New Balance: %.2f\n", amt, c[i].balance);
            } else if (code == 0) {
                if (c[i].balance < amt) {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                } else {
                    c[i].balance -= amt;
                    printf("Withdrawal successful. New Balance: %.2f\n", c[i].balance);
                }
            }
            return;
        }
    }
    printf("Account number not found.\n");
}

int main() {
    struct customer c[10];
    int n = 10, acc_no, code;
    float amt;

    for (int i = 0; i < n; i++) {
        printf("\nEnter data for customer %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &c[i].acc_no);
        printf("Name: ");
        scanf(" %s", c[i].name);
        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }

    print_low_balance(c, n);

    printf("Enter Account No, Amount, and Code (1 for deposit, 0 for withdrawal): ");
    scanf("%d %f %d", &acc_no, &amt, &code);

    transaction(c, n, acc_no, amt, code);

    return 0;
}