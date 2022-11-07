#include <stdio.h> 
#include <stdlib.h>

//Structure containing a Data part & a

//Link part to the next node in the List
struct Node
{
int Data;
struct Node *Next;
}*Head;
// Counting number of elements in the List 
int length()
{
struct Node *cur_ptr;
int count=0;
cur_ptr=Head; 
while(cur_ptr != NULL)
{
cur_ptr=cur_ptr->Next;
count++;
}
return(count);
}




//Adding a Node at the end of the list.....................................................
void addEnd(int num)
{
struct Node *temp1, *temp2;
temp1=(struct Node *)malloc(sizeof(struct Node));
 temp1->Data=num;
// Copying the Head location into another node. 
temp2=Head;
if(Head == NULL)
{
// If List is empty we create First Node.
Head=temp1;
Head->Next=NULL;
}
else
{
// Traverse down to end of the list. 
while(temp2->Next != NULL)
 temp2=temp2->Next;
// Append at the end of the list.
 temp1->Next=NULL;
temp2->Next=temp1;
}
}

// Adding a Node at the Beginning of the List.......................................................... 
void addBeg(int num)
{
struct Node *temp;
temp=(struct Node *)malloc(sizeof(struct Node));
temp->Data = num;
if (Head == NULL)
{
//List is Empty Head=temp;
temp->Next=NULL;
Head=temp;
}
else
{
temp->Next=Head; Head=temp;
}
}

// Adding a new Node at specified position.....................................
void addAt(int num, int loc)
{
int i;
struct Node *temp, *prev_ptr, *cur_ptr; cur_ptr=Head;
if(loc > (length()+1) || loc <= 0)
{
printf("\nInsertion at given location is not possible\n ");
}
else{
// If the location is starting of the list 
if (loc == 1)
{
addBeg(num);
}
else
{
for(i=1;i<loc;i++)
{
prev_ptr=cur_ptr; cur_ptr=cur_ptr->Next;
}
temp=(struct Node *)malloc(sizeof(struct Node)); 
temp->Data=num;
prev_ptr->Next=temp; temp->Next=cur_ptr;}
}
}






// Deleting a node from List depending upon the data in the node............................................

int delNodeData(int num)
{
struct Node *prev_ptr, *cur_ptr; cur_ptr=Head;
while(cur_ptr != NULL)
{
if(cur_ptr->Data == num)
{
if(cur_ptr==Head)
{
Head=cur_ptr->Next; free(cur_ptr);
return 0;
}
else
{
prev_ptr->Next=cur_ptr->Next; 
free(cur_ptr);
return 0;
}
}
else
{
prev_ptr=cur_ptr; cur_ptr=cur_ptr->Next;
}
}
printf("\nElement %d is not found in the List", num);
return 1;
}

// Deleting a node from List depending upon the location in the list.............................................
int delNodeLoc(int loc)
{
struct Node *prev_ptr, *cur_ptr; int i;
cur_ptr=Head;
if(loc > (length()) || loc <= 0)
{
printf("\nDeletion of Node at given location is not possible\n ");
}
else
{
    // If the location is starting of the list 
    if (loc == 1)
{
Head=cur_ptr->Next; free(cur_ptr); return 0;
}
else
{for(i=1;i<loc;i++)
{
prev_ptr=cur_ptr; cur_ptr=cur_ptr->Next;
}

prev_ptr->Next=cur_ptr->Next; 
free(cur_ptr);
}
}
return 1;
}





// Displaying list contents.............................................................
void display()
{
struct Node *cur_ptr; 
cur_ptr=Head;
if(cur_ptr==NULL)
{
printf("\nList is Empty");
}
else
{
printf("\nElements in the List: ");
//traverse the entire linked list .....................................................................
while(cur_ptr!=NULL)
{
printf(" -> %d ",cur_ptr->Data); cur_ptr=cur_ptr->Next;
}
printf("\n");
}
}





//Reversesing a Linked List...............................................................................
void reverse()
{
struct Node *prev_ptr, *cur_ptr, *temp;
cur_ptr=Head; prev_ptr=NULL;
while(cur_ptr != NULL)
{
temp=prev_ptr; prev_ptr=cur_ptr;
cur_ptr=cur_ptr->Next; prev_ptr->Next=temp;
}
Head=prev_ptr;
}


// main function 

int main(int argc, char *argv[])
{
int  i=0;
//Set HEAD as NULL 
Head=NULL;
while(1)
{
printf("\n####################################################\n");
printf("               MAIN MENU            \n"); 
printf("\n####################################################\n");
printf(" \nInsert a number \n1. At the Beginning"); 
printf(" \n2. At the End");
printf(" \n3. At a Particular Location in the List"); 
printf(" \n4. Print the Elements in the List\n"); 
printf(" \n5. Print number of elements in the List\n"); 
printf(" \n6. Reverse the linked List");
printf(" \n7. Delete a Node in the List by value"); 
printf(" \n8. Delete a node based on location");
printf(" \n9. Delete a last\n"); 
printf(" \n0. Exit\n");
printf(" \n   Choose Option: ");
scanf("%d",&i);
switch(i)
{
case 1:
{
int num;
printf(" \nEnter a Number to insert in the List: ");
scanf("%d",&num);
addBeg(num); display(); 
break;
}
case 2:
{
int num;
printf(" \nEnter the Number to insert: ");
scanf("%d",&num);
addEnd(num); display();
break;
}
case 3:
{
int num, loc;
printf("\nEnter the Number to insert: ");
scanf("%d",&num);
printf("\nEnter the location Number in List at which the Number is inserted: ");
scanf("%d",&loc); 
addAt(num,loc); 
display();
break;
}
case 4:
{
display();
break;
}
case 5:
{
display();
printf(" \nTotal number of nodes in the List: %d",length());
break;
}
case 6:
{
reverse(); 
display(); 
break;
}
case 7:
{
int num;
printf(" \nEnter the number to be deleted from List: ");
scanf("%d",&num);
delNodeData(num);
display();
break;
}
case 8:
{
int num;
printf(" \nEnter the location of the node to be deleted from List: ");
scanf("%d",&num); 
delNodeLoc(num);
display();
break;
}
case 9:
{
struct Node *temp1,*temp2;
if(Head->Next==NULL)
{ 
    Head=NULL;
}
else 
{
temp1=Head;
temp2=Head->Next;

while(temp2->Next!=NULL)
{
    temp1=temp2;
temp2 = temp2->Next; 
}
temp1->Next=NULL;
free(temp2);
}
display();
}
break;
case 0: exit(0);
default:
{
printf("\nWrong Option choosen");
}
}/* end if switch */
}/* end of while */
}/* end of main */
