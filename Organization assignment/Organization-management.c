#include <stdio.h>
#include <string.h>

   struct employee {
   
    char name[50];
    char address[50];
    char number[20];
    int salary;
   
   
   };

int main() {
  struct employee emp[100];
      struct employee temp;
     int empnum = 0;
     int choice;
     int i;
     int j;
     int num;
     int found;
     char orgname[50];
     char search[50];

  
        printf("Enter organization name: ");
         scanf(" %[^\n]", orgname);

    do {
        
        printf("\n===== MENU =====\n");
        printf("1. Add Employee\n");
        printf("2. View Organization Details\n");
        printf("3. Remove Employee\n");
        printf("4. Change Employee Details\n");
      
        printf("5. Search Employee by Name\n");
        printf("6. Search Employee by Address\n");
        printf("7. Sort Employee by Salary\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
          
          scanf("%d", &choice);

        if (choice == 1) {
        printf("Enter name: ");
        scanf(" %[^\n]", emp[empnum].name);

          printf("Enter address: ");
           scanf(" %[^\n]", emp[empnum].address);

          printf("Enter number: ");
          scanf(" %[^\n]", emp[empnum].number);

          printf("Enter salary: ");
            
            scanf("%d", &emp[empnum].salary);

               
                 empnum = empnum + 1;
           
          
          printf("Employee added!\n");
       
        }
   else if (choice == 2) {
           
            if (empnum == 0) {
                printf("No employees yet.\n");
            }
            else {
              printf("\n--- Organization Details ---\n");
                printf("Organization : %s\n", orgname);

               for (i = 0; i < empnum; i++) {
                    printf("\nEmployee %d\n", i + 1);
                    
                    printf("Name    : %s\n", emp[i].name);
                     printf("Address : %s\n", emp[i].address);
                     printf("Number  : %s\n", emp[i].number);
                       printf("Salary  : %d\n", emp[i].salary);
                }
            }
        }
       
       
      else if (choice == 3) {
         if (empnum == 0) {
           
           printf("No employees yet.\n");
          }
          else {
               
               printf("Enter employee number to remove: ");
                scanf("%d", &num);

               if (num < 1 || num > empnum) {
                      printf("Wrong employee number\n");
                    
                    }
                  else {
                    for (i = num - 1; i < empnum - 1; i++) {
                       
                        emp[i] = emp[i + 1];
                                 
                                 
                                  }
                    empnum = empnum - 1;
                    printf("Employee removed!\n");
                }
            }
        }
        else if (choice == 4) {
        if (empnum == 0) {
               
               printf("No employees yet.\n");
            
            }
        else {
              printf("Enter employee number to change: ");
                scanf("%d", &num);

          if (num < 1 || num > empnum) {
                    printf("Wrong employee number\n");
                
                }
           else { 
                  num = num - 1;

                      printf("Enter new name: ");
                       scanf(" %[^\n]", emp[num].name);

                        printf("Enter new address: ");
                        scanf(" %[^\n]", emp[num].address);

                         printf("Enter new number: ");
                           scanf(" %[^\n]", emp[num].number);

                         printf("Enter new salary: ");
                         scanf("%d", &emp[num].salary);

                     
                       printf("Employee details changed!\n");
                         
                          }
            }
        }
        else if (choice == 5) {
            if (empnum == 0) {
                printf("No employees yet.\n");
            }
            else {
                printf("Enter name to search: ");
                scanf(" %[^\n]", search);

                found = 0;
                for (i = 0; i < empnum; i++) {
                  if (strcmp(emp[i].name, search) == 0) {
                       
                        printf("\nEmployee Found\n");
                        
                          printf("Name    : %s\n", emp[i].name);
                          printf("Address : %s\n", emp[i].address);
                          printf("Number  : %s\n", emp[i].number);
                           printf("Salary  : %d\n", emp[i].salary);
                       
                       found = 1;
                    }
                }

                if (found == 0) {
                    printf("No employee with that name\n");
                }
            }
        }
        else if (choice == 6) {
            if (empnum == 0) {
                printf("No employees yet.\n");
            }
          else {
                printf("Enter address to search: ");
                scanf(" %[^\n]", search);

                found = 0;
             for (i = 0; i < empnum; i++) {
               if (strcmp(emp[i].address, search) == 0) {
                      printf("\nEmployee Found\n");
                       
                       printf("Name    : %s\n", emp[i].name);
                        printf("Address : %s\n", emp[i].address);
                        printf("Number  : %s\n", emp[i].number);
                        printf("Salary  : %d\n", emp[i].salary);
                           found = 1;
                              }
                }

                if (found == 0) {
                    printf("No employee with that address\n");
                }
            }
        }
        else if (choice == 7) {
            if (empnum == 0) {
                printf("No employees yet.\n");
            }
            else {
              for (i = 0; i < empnum - 1; i++) {
              for (j = i + 1; j < empnum; j++) {
                  if (emp[i].salary < emp[j].salary) {
                         
                          temp = emp[i];
                           emp[i] = emp[j];
                            emp[j] = temp;
                          
                             }
                    }
                }

               printf("\n--- Employees Sorted by Salary (High to Low) ---\n");
                for (i = 0; i < empnum; i++) {
                   printf("\nEmployee %d\n", i + 1);
                    printf("Name    : %s\n", emp[i].name);
                     printf("Address : %s\n", emp[i].address);
                     printf("Number  : %s\n", emp[i].number);
                    printf("Salary  : %d\n", emp[i].salary);
                   }
            }
        }
        else if (choice == 8) {
            printf("Bye\n");
        }
        else {
            printf("Wrong choice\n");
        }

    } while (choice != 8);

    return 0;
}
