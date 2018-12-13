#include <iostream>
#include <stdio.h>
#define null 0
using namespace std;

struct NodeStack{
    char nama[60],posisi[20],no[5];
    NodeStack *next;
};
NodeStack *TOP;

void push()
{

    struct NodeStack *newNode = new NodeStack;
    cout<<"Pemain sepak bola"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"No punggung : ";fflush(stdin);gets(newNode->no);
    cout<<"Nama        : ";fflush(stdin);gets(newNode->nama);
    cout<<"Posisi      : ";fflush(stdin);gets(newNode->posisi);
    newNode->next = TOP;
    TOP = newNode;
}

void pop()
{
    if(TOP== null)
    {
        cout<<"Stack Kosong!!"<<endl;
    cout<<"---------------------------------------"<<endl;
        return;
    }
    TOP = TOP->next;
}

void tampil()
{
    if (TOP==null)
    {
        cout<<"Stack kosong"<<endl;
    cout<<"---------------------------------------"<<endl;
        return;
    }
    struct NodeStack *temp= TOP;
    while (temp != null)
    {
        cout<<temp->no<<" -> "<<temp->nama<<" -> "<<temp->posisi<<endl;
        temp = temp->next;
    }
    cout<<"---------------------------------------"<<endl;
    cout<<endl;
}

int main()
{
    int pilih;
do
{

    cout<<"       Stack Linked List       "<<endl;
    cout<<"==============================="<<endl;
    cout<<"  1. PUSH"<<endl;
    cout<<"  2. POP"<<endl;
    cout<<"  3. TAMPIL"<<endl;
    cout<<"  4. EXIT"<<endl;
    cout<<" PILIHAN (1-4) : ";
    cin>>pilih;
    switch(pilih)
    {
    case 1:
        push();
    break;
    case 2:
        pop();
    break;
    case 3:
        tampil();
    break;
    case 4:
        cout<<"Terimakasih     "<<endl;
    break;
    default:
        cout<<"ERROR"<<endl;
    break;
    }
}while(pilih!=4);
}
