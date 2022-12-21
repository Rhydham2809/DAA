#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size,m,i;
    printf("Please enter the size of array : ");
    size = scanf("%d",&size);
    int array1[size],array2[size];

    static int top = -1;

    // printf("Please enter the following operations \n1.push \n2.pop \n3.display \n4.Quit");
    // m = scanf("%d",&m);

    

    void push()
    {
        if(top>=size) printf("OverFlow");
        else 
        {
        
             top++;
             printf("Please enter element %d : ",(top+1));
             array1[top] = scanf("%d",&array1[top]);
        
        }
        
    }

    void pop()
    {
        if(top==-1) printf("Empty stack");
        else 
        {
            printf("Deleted element = %d \n",array1[top]);
            top--;
        }
    }

    void display()
    {
        int top2 = top;

        while(top2!=-1)
        {
            printf("%d \n",array1[top2]);
            top2--;
        }
    }
    
    push();
    push();
    push();
    push();
    push();
    display();
    printf("================= \n");
    pop();
    display();
    
}