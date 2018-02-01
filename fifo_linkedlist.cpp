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

    void add_node()
    {
        Node *temp = new Node;  int n;
        cout<<"enter integer to add "<<endl;
        cin>>n;
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
    void get( )
    {
      Node *temp; temp=head;
      cout<<"first data "<<head->data<<endl;
      head=head->next;
      free(temp);
    }
};

int main()
{
    linked_list a;   string input="null";
    while(input!="end"){
      cout<<"enter command a=add/g=get/p=print "<<endl;
      cin>>input;
      if(input=="a")  a.add_node();
 else if(input=="g")  a.get();
 else if(input=="p")  a.print_list();
 else cout<<"enter correct command "<<endl;
    }

    return 0;
}
