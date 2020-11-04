#include<iostream>
using namespace std;
#include"linklist.h"
#include"linklist_and_func.h"
#define ERRO -1
linklist *linklist_and_func::init_linklist(int n){
    this->L=new linklist;
    L->data=n;
    linklist* p=L;
    for(int j=0;j<n;j++){
        p->next=new linklist;
        p=p->next;
        cin>>p->data;
    }
    p->next=NULL;
    return L;
}
int linklist_and_func::print_linklist(){
    cout<<"linklist's length is "<<this->L->data<<endl;
    if(!(this->L->data)){
        return ERRO;
    }
    else{   
        linklist* p=this->L->next;
        for(int j=0;j<this->L->data;j++){
             cout<<p->data<<" "<<p->next<<endl;
             p=p->next;
        }
        return 0;
    }
}
int main(void){
    int n;
    cout<<"please tell me the length of your linklist";
    cin>>n;
    linklist_and_func my_linklist;
    cout<<"please input the value"<<endl;
    my_linklist.init_linklist(n);
    my_linklist.print_linklist();
    system("pause");
    return 0;
}