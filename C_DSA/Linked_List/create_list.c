#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Listnode 
{
    int val;
    struct Listnode *next;
};

typedef struct Listnode Node;


int main(void){
    Node *head, *ptr, *newnode;
    // int val_new;
    int data[6] = {11, 12, 13, 14, 15, 16}; // 需輸入的數據

    head = (Node*)malloc(sizeof(Node)); //創建第一個節點
    head->val = data[0];  //初始化第一個節點的值，重要！！
    ptr = head;       // 設定存取指標的位置
    ptr->next = NULL; // 目前只有一個，所以指向NULL
    // printf("%d\n", data[0]);
    for(int i=1; i<6; i++)
    {
        newnode = (Node*)malloc(sizeof(Node));
        newnode->val = data[i]; // 輸入數據
        newnode->next = NULL;  // 將
        ptr->next = newnode;
        ptr = ptr->next;
    }
    printf("======================\n");
    // 走訪每個節點
    ptr = head;
    while(ptr->next != NULL)
    {   
        printf("%d\n", ptr->val);
        ptr = ptr->next;
    }
}