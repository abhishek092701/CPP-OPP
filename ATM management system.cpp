#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Account structure
struct Account {
    int acc_no;
    char name[50];
    int pin;
    char type[20];
    float balance;
};

// Transaction structure
struct Transaction {
    int acc_no;
    char type[20];
    float amount;
};

// Create Account
void create_account() {
    struct Account acc;
    FILE *fp = fopen("accounts.dat", "ab");

    printf("\nEnter Account Number: ");
    scanf("%d", &acc.acc_no);

    printf("Enter Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Set PIN: ");
    scanf("%d", &acc.pin);

    printf("Enter Account Type (Saving/Current): ");
    scanf("%s", acc.type);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    fwrite(&acc, sizeof(acc), 1, fp);
    fclose(fp);

    printf("? Account Created Successfully!\n");
}

// Login
int login() {
    struct Account acc;
    int acc_no, pin;

    FILE *fp = fopen("accounts.dat", "rb");

    printf("\nEnter Account Number: ");
    scanf("%d", &acc_no);

    printf("Enter PIN: ");
    scanf("%d", &pin);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.acc_no == acc_no && acc.pin == pin) {
            fclose(fp);
            return acc_no;
        }
    }

    fclose(fp);
    return -1;
}

// Add Transaction
void add_transaction(int acc_no, char type[], float amount) {
    struct Transaction t;
    FILE *fp = fopen("transactions.dat", "ab");

    t.acc_no = acc_no;
    strcpy(t.type, type);
    t.amount = amount;

    fwrite(&t, sizeof(t), 1, fp);
    fclose(fp);
}

// Deposit
void deposit(int acc_no) {
    struct Account acc;
    float amount;

    FILE *fp = fopen("accounts.dat", "rb+");

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.acc_no == acc_no) {
            acc.balance += amount;

            fseek(fp, -sizeof(acc), SEEK_CUR);
            fwrite(&acc, sizeof(acc), 1, fp);

            add_transaction(acc_no, "Deposit", amount);

            printf("?? Deposited! New Balance: %.2f\n", acc.balance);
            fclose(fp);
            return;
        }
    }
    fclose(fp);
}

// Withdraw
void withdraw(int acc_no) {
    struct Account acc;
    float amount;

    FILE *fp = fopen("accounts.dat", "rb+");

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.acc_no == acc_no) {

            if (acc.balance >= amount) {
                acc.balance -= amount;

                fseek(fp, -sizeof(acc), SEEK_CUR);
                fwrite(&acc, sizeof(acc), 1, fp);

                add_transaction(acc_no, "Withdraw", amount);

                printf("?? Withdrawn! New Balance: %.2f\n", acc.balance);
            } else {
                printf("? Insufficient Balance!\n");
            }

            fclose(fp);
            return;
        }
    }
    fclose(fp);
}

// Balance Check
void check_balance(int acc_no) {
    struct Account acc;
    FILE *fp = fopen("accounts.dat", "rb");

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.acc_no == acc_no) {
            printf("\n?? Name: %s", acc.name);
            printf("\n?? Type: %s", acc.type);
            printf("\n?? Balance: %.2f\n", acc.balance);
            fclose(fp);
            return;
        }
    }
    fclose(fp);
}

// Mini Statement
void mini_statement(int acc_no) {
    struct Transaction t;
    FILE *fp = fopen("transactions.dat", "rb");

    printf("\n--- Mini Statement ---\n");

    while (fread(&t, sizeof(t), 1, fp)) {
        if (t.acc_no == acc_no) {
            printf("%s : %.2f\n", t.type, t.amount);
        }
    }

    fclose(fp);
}

// Search Account
void search_account() {
    int acc_no, found = 0;
    struct Account acc;

    FILE *fp = fopen("accounts.dat", "rb");

    printf("Enter Account Number to search: ");
    scanf("%d", &acc_no);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.acc_no == acc_no) {
            printf("\n--- Account Found ---\n");
            printf("Account No: %d\n", acc.acc_no);
            printf("Name: %s\n", acc.name);
            printf("Type: %s\n", acc.type);
            printf("Balance: %.2f\n", acc.balance);
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (!found)
        printf("? Account not found!\n");
}

// Delete Account
void delete_account() {
    int acc_no, found = 0;
    struct Account acc;

    FILE *fp = fopen("accounts.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    printf("Enter Account Number to delete: ");
    scanf("%d", &acc_no);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.acc_no == acc_no) {
            found = 1;
            continue;
        }
        fwrite(&acc, sizeof(acc), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("accounts.dat");
    rename("temp.dat", "accounts.dat");

    if (found)
        printf("?? Account deleted successfully!\n");
    else
        printf("? Account not found!\n");
}

// Main Function
int main() {
    int choice;

    while (1) {
        printf("\n===== BANK SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Login\n");
        printf("3. Search Account\n");
        printf("4. Delete Account\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            create_account();
        }

        else if (choice == 2) {
            int user = login();

            if (user != -1) {
                int opt;

                while (1) {
                    printf("\n--- ATM MENU ---\n");
                    printf("1. Balance Enquiry\n");
                    printf("2. Deposit\n");
                    printf("3. Withdraw\n");
                    printf("4. Mini Statement\n");
                    printf("5. Logout\n");
                    printf("Enter option: ");
                    scanf("%d", &opt);

                    if (opt == 1)
                        check_balance(user);
                    else if (opt == 2)
                        deposit(user);
                    else if (opt == 3)
                        withdraw(user);
                    else if (opt == 4)
                        mini_statement(user);
                    else if (opt == 5)
                        break;
                }

            } else {
                printf("? Invalid Login!\n");
            }
        }

        else if (choice == 3) {
            search_account();
        }

        else if (choice == 4) {
            delete_account();
        }

        else if (choice == 5) {
            exit(0);
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}