#pragma once
#include"linklist.h"
class linklist_and_func{
    public:
    linklist_and_func(){
        cout<<"a linklist is initializing"<<endl;
    }
    linklist* L;
    //初始化linklist，开辟大小为n
    linklist* init_linklist(int n);
    //输出已有链表的每位元素与地址，第一位为列表元素个数
    int print_linklist();
    //对链表进行升序排序
    int sort_value();
    //删除第i个元素
    int delete_value(int i);
};
