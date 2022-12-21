#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct simple_linkedList
    {
        int val;
        struct simple_linkedList *next;
    };

    struct simple_linkedList *head,*tail;

    head = (struct simple_linkedList *)malloc(sizeof(struct simple_linkedList));
    tail = (struct simple_linkedList *)malloc(sizeof(struct simple_linkedList));
    
    int count = 1;

    void insert_at_end(int a)
    {
        struct simple_linkedList *new;
        new  = (struct simple_linkedList *)malloc(sizeof(struct simple_linkedList));

        if(count==1)
        {
            head->val = a;
            tail = head;
            count = 2;
        }
        else
        {
            new->val = a;
            tail->next = new;
            tail = new;
        }
    };

    void insert_at_start(int a)
    {
        struct simple_linkedList *new2;
        new2  = (struct simple_linkedList *)malloc(sizeof(struct simple_linkedList));

        new2->val = a;
        new2->next = head;
        head = new2;
    }

    void insert_in_between_after(int a,int b)
    {
        struct simple_linkedList *new3;
        new3 = (struct simple_linkedList *)malloc(sizeof(struct simple_linkedList));
        new3->val = b;
        int count2 = 0;

        if(head->val==a)
        {
            new3->next = head->next;
            head->next = new3;
            count2 = 1;
        }

        else if(tail->val == a)
        {
            tail->next = new3;
            tail = new3;
            count2 = 1;
        }

        else
        {
            struct simple_linkedList *find;
            find = (struct simple_linkedList *)malloc(sizeof(struct simple_linkedList));

            find = head;

            while (find!=tail)
            {
                if(find->val==a)
                {
                     new3->next = find->next;
                     find->next = new3;
                     count2 = 1;
                     break;
                }

                else find = find->next;

            }
            
            if(count==0)
            {
                printf("Not found the number");
            }
        }
        
    }

    void delete_from_anywhere(int a)
    {
        struct simple_linkedList *find;
        find = (struct simple_linkedList *)malloc(sizeof(struct simple_linkedList));
        find = head;

        if(head->val==a)
        {
            head = head->next;
        }

        else
        {
             while(find!=tail)
            {
                if(find->next->val==a)
                {
                     if(find->next==tail)
                    {
                        find->next = NULL;
                        tail = find;
                    }
                    else
                    {
                        find->next = find->next->next;
                    }
                    
                }
                
                else
                {
                    find = find->next; 
                }
                

            }
        }
    }

    void display()
    {
        struct simple_linkedList *display_purpose;

        display_purpose = head;

        while(display_purpose!=tail)
        {
            printf("%d \n",display_purpose->val);
            display_purpose = display_purpose->next;
        }

        if(display_purpose == tail)
        {
            printf("%d \n",display_purpose->val);
        }

    }

    insert_at_end(2);
    insert_at_end(4);

    insert_at_start(1);

    insert_in_between_after(4,5);
    insert_in_between_after(2,3);

    delete_from_anywhere(2);
    delete_from_anywhere(1);
    delete_from_anywhere(5);

    insert_in_between_after(3,8);
    insert_in_between_after(4,7);
    insert_in_between_after(7,9);
    insert_in_between_after(9,0);
    insert_in_between_after(0,10);


    display();
    
}