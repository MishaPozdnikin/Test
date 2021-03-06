#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int value;
    struct Node* next;
} List;

List* init(int value)
{
    List* head = (List*)malloc(sizeof(List));
    head->next = NULL;
    head->value = value;
    return head;
}

void add(int value, List *head)
{
    List* temp = head;
    while(temp->next != NULL)
    {  
        temp = temp->next;
    }  
    List* new_node = (List*)malloc(sizeof(List));;
    new_node->next = NULL;
    new_node->value = value;
    temp->next = new_node;
}

void ls(List* head)
{
    List* temp = (List*)malloc(sizeof(List));
    temp = head;
    while(temp != NULL)
    {
        printf("%d\n",temp->value);
        temp = temp->next;
    }
    free(temp);
}

int get_by_index(List* head, int pos)
{
    List* temp = head;
    while(pos-- && head->next != NULL)
    {
        temp = temp->next;
    }
    return temp->value;
}

int main()
{
    char str[] = "Hello GitHub!";
    char *fortok = strtok(str, " ");
    while(fortok != NULL)
    {
        printf("%s",fortok);
        fortok = strtok(NULL, " ");
    }
    return 0;
} 