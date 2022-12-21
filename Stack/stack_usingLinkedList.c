// push,pop,display
#include<stdio.h>>
#include<stdlib.h>>
void main()
{
    struct stack
    {
        int val;
        struct stack *next;
    };

     struct stack *head,*tail;
     head = (struct stack *)malloc(sizeof(struct stack));
     tail = (struct stack *)malloc(sizeof(struct stack));
     int count = 1;

    void push(int a)
    {
        struct stack *new;
        new = (struct stack *)malloc(sizeof(struct stack));
        new->val = a;

        if(count==1)
        {
            head = new;
            tail = head;
            count = -1;
        }
        else
        {
            tail->next = new;
            tail = new;
        }
        
    };

    void display()
    {
        struct stack *find;
        find = (struct stack *)malloc(sizeof(struct stack));

        find = head;

        while(find!=tail)
        {
            printf("%d \n",find->val);
            find = find->next;
        }
        printf("%d \n",tail->val);
    }

    void pop()
    {
        struct stack *find;
        find = (struct stack *)malloc(sizeof(struct stack));
        find = head;
        while (find->next!=tail)
        {
            find = find->next;
            if(find->next==tail)
            {
                 find->next = NULL;
                 tail = find;
                //  printf("OK");
                 break;
            }
        }
        // int tail_value = tail->val;
        // printf("%d \n",tail_value);
       
    }

    push(90);
    push(10);
    push(9);
    push(1);
    push(9);

    pop();
    pop();
    pop();

    display();
    
}