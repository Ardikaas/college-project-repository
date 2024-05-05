#include <iostream>
using namespace std;

struct node{
  int data;
  int dt;
  node* next;
};

node* head;
node* tail;
node* curr;
node* entry;
node* del;

void initial(){
  head = NULL;
  tail = NULL;
}

void input(int dt){
  entry = (node* )malloc(sizeof(node));
  entry -> data = dt;
  entry -> next = NULL;
  if (head == NULL){
    head = entry;
    tail = head;
  }else{
    tail -> next = entry;
    tail = entry;
  }
}

void update(int dt, int entry){
  if (head == NULL){
    cout << "List is empty" << endl;
    return;
  }
  curr = head;
  for (int i = 0;i < entry;i++){
    if (curr == NULL){
      cout << "Index out of range" << endl;
      return;
    }
    curr = curr -> next;
  }
  curr -> data = dt;
}

void remove(){
  int var;
  if (head == NULL){
    cout << "List is empty" << endl;
  }else{
    var = head -> data;
    del = head;
    head = head -> next;
    delete del;
    cout << "delete success" << endl;
  }
}

void display(){
  curr = head;
  if (head == NULL){
    cout << "List is empty" << endl;
  }else{
    while (curr != NULL){
      cout << curr -> data << "->";
      curr = curr -> next;
    }
    cout << "NULL" << endl;
  }
}

void menu(){
  char choice;
  char repeat;
  int data;
  int dt;
  int entry;
  do{
    system("cls");
    cout << "Menu :" << endl;
    cout << "1. Input data" << endl;
    cout << "2. Delete data" << endl;
    cout << "3. Print data" << endl;
    cout << "4. Update data" << endl;
    cout << "5. exit" << endl;
    cout << "input your choice : ";
    cin >> choice;
    switch(choice){
      case '1' :
        cout << "Input data : ";
        cin >> data;
        input(data);
        break;
      case '2':
        remove();
        break;
      case '3':
        display();
        break;
      case '4':
        cout << "Input new data : ";
        cin >> dt;
        cout << "chose list : ";
        cin >> entry;
        update(dt, entry);
        break;
      case '5':
        exit (0);
        break;
      default:
        cout << "Please try again";
    }
  }while(repeat == 'y' || repeat == 'Y');
}

int main(int argc, char const *argv[])
{
  initial();
  menu();
  return 0;
}
