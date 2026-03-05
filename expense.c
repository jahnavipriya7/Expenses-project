#include <stdio.h>
#include <stdlib.h>

struct expense
{
    int day, month, year;
    char category[30];
    float amount;
};

void addExpense();
void viewExpenses();

int main()
{
    int choice;

    while (1)
    {
        printf("\n====== Expense Tracker ======\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addExpense();
            break;
        case 2:
            viewExpenses();
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}

void addExpense()
{
    struct expense e;
    FILE *fp;

    fp = fopen("expenses.dat", "ab");

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &e.day, &e.month, &e.year);

    printf("Enter category: ");
    scanf("%s", e.category);

    printf("Enter amount: ");
    scanf("%f", &e.amount);

    fwrite(&e, sizeof(e), 1, fp);

    fclose(fp);

    printf("Expense added successfully!\n");
}

void viewExpenses()
{
    struct expense e;
    FILE *fp;
    float total = 0;

    fp = fopen("expenses.dat", "rb");

    if (fp == NULL)
    {
        printf("No expenses recorded yet.\n");
        return;
    }

    printf("\nDate\t\tCategory\tAmount\n");
    printf("-------------------------------------\n");

    while (fread(&e, sizeof(e), 1, fp))
    {
        printf("%d/%d/%d\t%s\t\t%.2f\n",
               e.day, e.month, e.year, e.category, e.amount);
        total += e.amount;
    }

    printf("-------------------------------------\n");
    printf("Total Expense: %.2f\n", total);

    fclose(fp);
}