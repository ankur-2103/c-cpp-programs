#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct acc_type
{
    char bank_name[20];
    char branch_name[20];
    char acc_holder_first_name[50];
    char acc_holder_middle_name[50];
    char acc_holder_last_name[50];
    int acc_holder_phone_number;
    char acc_holder_address[100];
    int acc_number;
    float acc_balance;
};

void display_option();
void create_new_acc();
void cash_deposit();
void cash_withdraw();
void acc_information();
void Log_out();

struct acc_type acc[100];
int acc_num = 0;
int acc_no = 20210209;

int main()
{
  int a=0;
  while(1)
  {
    printf("\n\n**********WELCOME**********\n");
    display_option();
    printf("\nPlease select one of the above (1 to 5) : ");
    scanf("%d",&a);
    if(a>5 || a==0)
    {
       exit(0);
    }

    switch(a)
    {
      case 1:
         create_new_acc();
         break;
      case 2:
         cash_deposit();
         break;
      case 3:
         cash_withdraw();
         break;
      case 4:
         acc_information();
         break;
      case 5:
         Log_out();
         break;
      default :
          printf("\nInvalid Input!!");
         break;
    }
   }

    return 0;
}

void display_option()
{
    printf("\n1. Create a new account");
    printf("\n2. Cash Deposit");
    printf("\n3. Cash Withdraw");
    printf("\n4. Account information");
    printf("\n5. Log out");

}

void create_new_acc()
{
    //clrscr();
    int i, a;
    printf("\nEnter Bank name (*without space) : ");
    scanf("%s", acc[acc_num].bank_name);

    printf("\nEnter Branch name (*without space) : ");
    scanf("%s", acc[acc_num].branch_name);

    printf("\nEnter your first name: ");
    scanf("%s", acc[acc_num].acc_holder_first_name);

    printf("\nEnter your second name: ");
    scanf("%s", acc[acc_num].acc_holder_middle_name);

    printf("\nEnter your last name: ");
    scanf("%s", acc[acc_num].acc_holder_last_name);

    printf("\nEnter your phone number: +91 ");
    scanf("%d",&acc[acc_num].acc_holder_phone_number);

    printf("\nEnter your address (*without space) : ");
    scanf("%s", acc[acc_num].acc_holder_address);

    printf("\n\nAccount Created Succesfully!!!");
    printf("\n\nBank name                  : %s", acc[acc_num].bank_name);
    printf("\nBranch name                : %s", acc[acc_num].branch_name);
    printf("\nAccount holder first name  : %s", acc[acc_num].acc_holder_first_name);
    printf("\nAccount holder middle name : %s", acc[acc_num].acc_holder_middle_name);
    printf("\nAccount holder last name   : %s", acc[acc_num].acc_holder_last_name);
    printf("\nAccount holder Phone Number: +91 %d", acc[acc_num].acc_holder_phone_number);
    printf("\nAccount holder address     : %s", acc[acc_num].acc_holder_address);
    printf("\nAccount number             : %d", acc[acc_num].acc_number = acc_no);
    printf("\nAccount Balance            : %f", acc[acc_num].acc_balance = 0);
  acc_num++;
  acc_no++;
  
}

void cash_deposit()
{
    int element, position, index, m, flag=0, a;
    float j;
    printf("\n\nEnter your account number: ");
    scanf("%d", &element);
    for(index = 0; index < 100; index++)   
    {
        if(acc[index].acc_number == element)    
        {  
         flag = 1;
         printf("\nAccount balance is: %f",acc[index].acc_balance);
         printf("\nEnter amount to be deposited: ");
         scanf("%f", &j);
         m = acc[index].acc_balance + j;
         acc[index].acc_balance = m;
         printf("Cash has been deposited Succesfully!!");
         printf("\nYour new balance is: %f",acc[index].acc_balance);
         break;
        }
       
    }
    if(flag == 0)
    {
        printf("Account not found!!");
    }
    
}

void cash_withdraw()
{
    int element, position, index, m, flag=0, a;
    float j;
    printf("\n\nEnter your account number: ");
    scanf("%d", &element);
    for(index = 0; index < 100; index++)   
    {
        if(acc[index].acc_number == element)    
        {  
         flag = 1;
         printf("\nAccount balance is: %f",acc[index].acc_balance);
         printf("\nEnter amount to be withdrawn: ");
         scanf("%f", &j);
         m = acc[index].acc_balance - j;
         acc[index].acc_balance = m;
         printf("\nCash has been withdrawn Succesfully!!");
         printf("\nYour new balance is: %f",acc[index].acc_balance);
            break;
        }
       
    }
    if(flag == 0)
    {
        printf("Account not found!!");
    }
    
}

void acc_information()
{
    int element, position, index, m, flag=0, a;
    float j;
    printf("\n\nEnter your account number: ");
    scanf("%d", &element);
    for(index = 0; index < 100; index++)   
    {
        if(acc[index].acc_number == element)    
        {  
         flag = 1;
         printf("\n\nBank name                  : %s", acc[index].bank_name);
         printf("\nBranch name                : %s", acc[index].branch_name);
         printf("\nAccount holder first name  : %s", acc[index].acc_holder_first_name);
         printf("\nAccount holder middle name : %s", acc[index].acc_holder_middle_name);
         printf("\nAccount holder last name   : %s", acc[index].acc_holder_last_name);
         printf("\nAccount holder Phone Number: +91 %d", acc[index].acc_holder_phone_number);
         printf("\nAccount holder address     : %s", acc[index].acc_holder_address);
         printf("\nAccount number             : %d", acc[index].acc_number);
         printf("\nAccount balance            : %f", acc[index].acc_balance);
            break;
        }
       
    }
    if(flag == 0)
    {
        printf("Account not found!!");
    }
   
    
}

void Log_out()
{
    printf("\nThanks for visiting!!!\nVisit again!!!");
    exit(0);
}