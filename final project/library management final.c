#include <stdio.h>
#include <stdlib.h>
struct library
    {
        char bk_nm[50];
        float pr_bk;
        int pg_bk;
    };

int main()
{
   struct library l[100];
   int i, j, a,count = 0;

   while(1)
   {
       for (i = 0; i < 50; i++)

             {

             printf("-");

             };
       printf("\n1 Add a book\n");
       printf("2 List of book in library\n");
       printf("3 Number of books in library\n");
       printf("4 Exit\n");

       printf("Enter your choice (1 to 4): ");
       scanf("%d",&j);

       switch (j)
       {
         case (1):
               for (i = 0; i < 50; i++)

             {

             printf("-");

             };
               printf("\nEnter book name (*without space): ");
               scanf("%s",l[count].bk_nm);
               printf("Enter book price: ");
               scanf("%f",&l[count].pr_bk);
               printf("Enter book total number of pages: ");
               scanf("%d",&l[count].pg_bk);
               count++;
                break;
             

         case (2):
               for (i = 0; i < 50; i++)

             {

             printf("-");

             };
               printf("\nYou have entered these many books:\n ");

               for(i = 0; i<count; i++)
               {
                 printf("Name of book: %s", l[i].bk_nm);
                 printf("\tPrice of book: %f", l[i].pr_bk);
                 printf("\tTotal number of pages: %d\n", l[i].pg_bk);
               }
               break;

        case (3):
              for (i = 0; i < 50; i++)

             {

             printf("-");

             };
             printf("\nTotal numbe of books available in library are : %d\n",count);
             break;;

        case (4):
             for (i = 0; i < 50; i++)

             {

             printf("-");

             };
             printf("\nThankyou for Visiting!\nVisit Again!\n");
             for (i = 0; i < 50; i++)

             {

             printf("-");

             };
             exit(0);
       }
   }
}
