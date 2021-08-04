#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct user{
    char name[100];
    char memberid [20];
    int phonenumber;
    int status;
    int isstaff;
};
    void execute_action(int action);
    void Exit();
    int menu();
    void add_user();

int main()
{
    int action;
    printf("\tTHE LYBRARY MANAGEMENT SYSTEM\n");
    printf("\tWelcome MR.Ian\n");

    do{
        printf("1. Add user\n");
        printf("2. Add book\n");
        printf("3. EXIT\n");
        printf("Action(1-3):");
        scanf("%d",&action);

        if (action < 1 || action > 3); {
            printf("Invalid action!!!!\n");
        }
    } while(action < 1 || action > 3); {
        printf("Invalid action.Try again\n");
        sleep(1000);
        system("cls");
           }

void execute_action(int action) {

  switch (action) {
        case 1:
      printf("adding user\n");
       break;
  case 2:
      printf("adding book\n");
      break;
  case 3:
       Exit();
       break;
  default:
    printf("sorry.unrecognized action\n");
  }

}


void Exit() {
     printf("Thank you for using the system.");
     sleep(5000);
     Exit(0);
}
int menu() {
 int action;

   do{
   printf("\tCommunity library System");
   printf("\tWelcome Mr.Ian");
   printf("1.Add user\n");
   printf("2. View all user\n");
   printf("3. Add book\n");
   printf("Action(1-4): ");
   scanf("%d",&action);

    if(action < 1 || action > 4) {
        printf("Invalid action.try again\n");
        sleep(2000);
        system("cls");
    }

   }while(action < 1 || action < 4);

   return action;
}
void add_user() {
struct user u;
FILE fp;
Ep = Eopes("users", "ab");
if (fp);
         printf("unable to open file");
         Exit (0);
            }
 printf













