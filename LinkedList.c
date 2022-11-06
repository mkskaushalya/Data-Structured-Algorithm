/* A simple linked list (dynamic) implementation to be used as a mid exam presentation by SLTC's ICE Batch 8A students.
Date created: Friday; April 01, 2022 @ 1200hrs. @ SLTC
Modified as a group work
*/

#include <stdio.h>
#include <windows.h>   // WinApi header
#include <stdlib.h> // this pre-processor directive is required for malloc kkkk

// create the node user-defined data structure
struct Node
{
  int data;
  struct Node *link;
};

int main()
{
    // Start with the empty list (create the head pointer of the linked list)
    struct Node* head = NULL;

    // Allocation variables for choices
    // Allocation variables for choices

    int choice;
    int i = 0;
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 3);
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    SetConsoleTextAttribute(hConsole, 2);
    printf("                                                                    ##      ##  ########  ##         ######    #######   ##     ##  ########    \n");
    printf("                                                                    ##  ##  ##  ##        ##        ##    ##  ##     ##  ###   ###  ##          \n");
    printf("                                                                    ##  ##  ##  ##        ##        ##        ##     ##  #### ####  ##          \n");
    printf("                                                                    ##  ##  ##  ######    ##        ##        ##     ##  ## ### ##  ######      \n");
    printf("                                                                    ##  ##  ##  ##        ##        ##        ##     ##  ##     ##  ##          \n");
    printf("                                                                    ##  ##  ##  ##        ##        ##    ##  ##     ##  ##     ##  ##          \n");
    printf("                                                                     ###  ###   ########  ########   ######    #######   ##     ##  ########    \n");
    SetConsoleTextAttribute(hConsole, 3);
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    SetConsoleTextAttribute(hConsole, 6);
    printf("\n                                                                            THIS IS DEMONSTRATION PROGRAM FOR THE LINKED LIST  ");
    SetConsoleTextAttribute(hConsole, 3);
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    SetConsoleTextAttribute(hConsole, 6);
    printf("                                                                                [ Data Structures and Algorithms (EIC2305) ]");
    SetConsoleTextAttribute(hConsole, 3);
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    do
    {
    int x = 3;
    SetConsoleTextAttribute(hConsole, 4);
    printf("\n                                                                              +-------------------------------------------------+\n");
    printf("                                                                              | # # # # # # # # # # # # # # # # # # # # # # # # |\n");
    printf("                                                                              | # +-----------------------------------------+ # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # |      ");
    SetConsoleTextAttribute(hConsole, x);
    printf("[1] Add a Node in the begining");
    SetConsoleTextAttribute(hConsole, 4);
    printf("     | # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # |      ");
    SetConsoleTextAttribute(hConsole, x);
    printf("[2] Add a Node in the end");
    SetConsoleTextAttribute(hConsole, 4);
    printf("          | # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # |      ");
    SetConsoleTextAttribute(hConsole, x);
    printf("[3] Update a Node");
    SetConsoleTextAttribute(hConsole, 4);
    printf("                  | # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # |      ");
    SetConsoleTextAttribute(hConsole, x);
    printf("[4] Delete a Node");
    SetConsoleTextAttribute(hConsole, 4);
    printf("                  | # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # |      ");
    SetConsoleTextAttribute(hConsole, x);
    printf("[5] Search for a Node");
    SetConsoleTextAttribute(hConsole, 4);
    printf("              | # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # |      ");
    SetConsoleTextAttribute(hConsole, x);
    printf("[6] Print the List");
    SetConsoleTextAttribute(hConsole, 4);
    printf("                 | # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # |      ");
    SetConsoleTextAttribute(hConsole, x);
    printf("[7] Sort the list");
    SetConsoleTextAttribute(hConsole, 4);
    printf("                  | # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # |      ");
    SetConsoleTextAttribute(hConsole, x);
    printf("[8] Count Nodes");
    SetConsoleTextAttribute(hConsole, 4);
    printf("                    | # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # |      ");
    SetConsoleTextAttribute(hConsole, x);
    printf("[9] Remove the list");
    SetConsoleTextAttribute(hConsole, 4);
    printf("                | # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # |     ");
    SetConsoleTextAttribute(hConsole, x);
    printf("[10] Exit program");
    SetConsoleTextAttribute(hConsole, 4);
    printf("                   | # |\n");
    printf("                                                                              | # |                                         | # |\n");
    printf("                                                                              | # +-----------------------------------------+ # |\n");
    printf("                                                                              | # # # # # # # # # # # # # # # # # # # # # # # # |\n");
    printf("                                                                              +-------------------------------------------------+\n");
    SetConsoleTextAttribute(hConsole, 7);printf( "\n\n  Enter the choice :");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                i = 1;
                break;
            case 2:
                i = 2;
                break;
            case 3:
                i = 3;
                break;
            case 4:
                i = 4;
                break;
            case 5:
                i = 5;
                break;
            case 6:
                i = 6;
                break;
            case 7:
                i = 7;
                break;
            case 8:
                i = 8;
                break;
            case 9:
                i = 9;
                break;
        }

        // Inserting a node at the beginning.
        if(i == 1)
        {
            int addF;
            printf( "\n    Enter node Data :");
            scanf("%d", &addF);
            insertbegin(&head,addF);
        }

        // Inserting a node at the end
        if(i == 2)
        {
            int addE;
            printf( "\n    Enter node Data :");
            scanf("%d", &addE);
            insertend(&head,addE);
        }

        // Updating a selected node's value
        if(i == 3)
        {
            int exVal,newVal;
            printf( "\n    Enter the Existing value :");
            scanf("%d", &exVal);
            printf( "\n    Enter the New value :");
            scanf("%d", &newVal);
            updatenode(&head,exVal,newVal);
        }

        // deleting a node from the linked list
        if(i == 4)
        {
            int value;
            printf( "\n    Enter value to delete :");
            scanf("%d", &value);
            deletenode(&head,value);
        }

        // Search for a node.
        if(i == 5)
        {
            int value;
            printf( "\n    Enter the value to search :");
            scanf("%d", &value);
            searchnode(&head,value);
        }

        // Printing Linked list
        if(i == 6)
        {
            printf("\n Created Linked list :");
            printList(head);
        }

        // Sort the Linked list.
        if(i == 7)
        {
            sortList(head);
        }

        // counting nodes in the linked list
        if(i == 8)
        {
            countList(head);
        }

        // Remove the Linked list
        if(i == 9)
        {
            deleteList(&head);
            if (head == NULL)
                {
                printf("\n List deleted successfully.");
                }
        }
        i=0;
    }while(choice !=10 );
        // End the whole program
    return 0;
}

/*-------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------- Functions -----------------------------------------------*/
/*-------------------------------------------------------------------------------------------------------*/


// Function to Add a node at the end of the list
void insertend(struct Node** header, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *last = *header;  /* used in step 5*/

    /* 2. put in the data  */
    new_node->data  = new_data;

    /* 3. This new node is going to be the last node, so make link of
          it as NULL*/
    new_node->link = NULL;

    /* 4. If the Linked List is empty, then make the new node as head */
    if (*header == NULL)
    {
       *header = new_node;
       return;
    }

    /* 5. Else traverse till the last node */
    while (last->link != NULL)
        last = last->link;

    /* 6. Change the link of last node */
    last->link = new_node;
    return;
}

// Function to insert a node at the beginning of a linked list
void insertbegin(struct Node **header, int new_data)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data; //(*new_node).data
    new_node->link = *header; //(*new_node).link
    *header = new_node;
}


// Function to delete nodes
void deletenode(struct Node** header, int value)
{
    // Store head node
    struct Node *temp = *header, *prev;

    // If head node itself holds the value to be deleted
    if (temp != NULL && temp->data == value) {
        *header = temp->link; // Changed head
        free(temp); // free old head
        return;
    }

    // Search for the value to be deleted, keep track of the
    // previous node as we need to change 'prev->link'
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->link;
    }

    // If value was not present in linked list
    if (temp == NULL)
        return printf("\n        Value entered incorrect.");

    // Unlink the node from linked list
    prev->link = temp->link;

    free(temp); // Free memory
}

// This function to search for a node
void searchnode(struct Node** header, int value)
{
    // Store head node
    struct Node *temp = *header, *prev;

    while(temp != NULL)
    {
        if(temp->data == value)
        {
            return printf("        Searched data found.");
        }
        else{temp = temp->link;}
    }
    return printf("        Searched data Not found.");
}

// This function to update a node
void updatenode(struct Node** header, int value,int new_data)
{
    // Store head node
    struct Node *temp = *header, *prev;

    while(temp != NULL)
    {
        if(temp->data == value)
        {
             temp->data  = new_data;
            return ;
        }
        else{temp = temp->link;}
    }
    return printf("\n        Existing value entered incorrect.");
}

// This function counts number of nodes of linked list.
void countList(struct Node *node){
    int count = 0 ;
    while (node != NULL)
  {
     count++;
     node = node->link;
  }

    printf("\n Total no. of nodes : %d",count);

}

// This function prints contents of linked list starting from head.
void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->link;
  }
}

// Function to Sort the given linked list Ascending.
void sortList(struct Node *start)
{
    int swapped;
    struct Node *temp;
    struct Node *prev = NULL;

    /* Checking for empty list */
    if (start == NULL)
        return;

    do
    {
        swapped = 0;
        temp = start;

        while (temp->link != prev)
        {
            if (temp->data > temp->link->data)
            {
                swap(temp, temp->link);
                swapped = 1;
            }
            temp = temp->link;
        }
        prev = temp;
    }
    while (swapped);
}

// Function to swap data of two nodes a and b*/
void swap(struct Node *a, struct Node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

// Iterative function to delete a linked list
void deleteList(struct Node** head)
{
    struct Node* prev = *head;

    while (*head)
    {
        *head = (*head)->link;

        free(prev);
        prev = *head;
    }
}
