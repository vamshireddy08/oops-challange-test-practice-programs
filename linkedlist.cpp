#include<iostream>
using namespace std;

struct Node {
int data;
Node *next;
};

class linked_list
{
private:
    Node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    int findmiddle_pointer( )
    {
      Node *fast,*slow; fast=head; slow=head;
      while(fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;
      }
      return slow->data;
    }
    void add_node(int n)
    {
        Node *temp = new Node;
    //    assert(temp != NULL);
        temp->data = n;
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail->next;
        }
    }
    void print_list( )
    { Node *temp;
      temp=head;
      while(temp!=NULL)
      {
        cout<<temp->data<<" ";
        temp=temp->next;
      }
      cout<<endl;
    }
    int getLength_Iterative( )
    { int count=0;
      Node *temp;
      temp=head;
      while(temp!=NULL)
      {
        count++;temp=temp->next;
      }
      return count;
    }
    void delete_list( )
    {
      Node *temp;
      temp=head;
      while(temp!=NULL)
      {
        head=head->next;
        //free(temp);
        delete temp;
        temp=head;
          print_list( );
      }
      head=NULL;
      cout<<"head is "<<head<<endl;
      print_list( );
    }
    bool searchElement(int key)
    {
      Node *temp; temp=head;
      while(temp->data!=key){temp=temp->next; }
      if(temp!=NULL)
      return 1;
      else return 0;
    }
};

int main()
{
    linked_list a;
    a.add_node(1);  a.add_node(41);  a.add_node(121);  a.add_node(66);
    a.add_node(2);    a.add_node(72);  a.add_node(29);  a.add_node(8);
     int len=a.getLength_Iterative();
    cout<<"length of list : "<<len<<endl;
      a.print_list();
    a.delete_list();
    a.add_node(11);
    a.add_node(23);
    a.add_node(17);
    a.add_node(2);
    a.print_list();
int middle=a.findmiddle_pointer( );
cout<<"middle number is "<<middle<<endl;
bool f=a.searchElement(2);

if(f)
cout<<"element 2 is present in the list "<<endl;
else
cout<<"element 2 is  not present in the list "<<endl;
    return 0;
}
