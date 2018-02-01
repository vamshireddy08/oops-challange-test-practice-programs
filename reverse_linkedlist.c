#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};

void add(struct node** head)
{ int t;
struct node* new_node=(struct node* )malloc(sizeof(struct node));

printf("enter data\n");
scanf("%d",&t);
new_node->data=t;

if(*head==NULL)
{ new_node->next=NULL; *head=new_node;}
else
{ new_node->next=*head; *head=new_node;}
}

void print(struct node **head)
{
  struct node *temp;  temp=*head;
  while(temp!=NULL)
  {
    printf("%3d ",temp->data);
        temp=temp->next;
  }
  printf("   \n");
}
void get(struct node **head )
{ int t;
struct   node *temp; temp=*head;
t=temp->data;
printf("first data  %d  \n", t );
  *head=temp->next;
  free(temp);
}
void reverse(struct node **head)
{
struct node *t1,*t2,*t3;
t1=*head;
t2=t1->next;
t3=t2->next;
t1->next=0;

while(t3!=NULL)
{ *head=t2;
t2->next=t1;
  t1=t2;
  t2=t3;
  t3=t3->next;
}
*head=t2;
t2->next=t1;
}
int main()  {
  char command='s';
struct node *head=NULL,*tail=NULL;
while(command!='e')
{
  printf("enter command\t");
scanf("%c",&command);
if(command=='a')
add(&head);
if(command=='p')
print(&head);
if(command=='g')
get(&head);
if(command=='r')
reverse(&head);
}
  return 0;
}
