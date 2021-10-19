#include <stdio.h>
#include <stdlib.h>

//Global Variable
int size,choice,ele;

//Creating Stack
struct stack{
    int arr[100];
    int top;

}st;

//Inserting Element
void push(struct stack * st)
{
    if((st->top)==size-1)     
        printf("\n Stack is Full");
    else
    {
        st->top++;               
        printf("\nEnter a Value ");
        scanf("%d",&ele); 
        st->arr[st->top]=ele;
    }
}

//Removing Element
void pop(struct stack* st)
{
    if((st->top)==-1)
        printf("\nStack is Empty");     
    else
    {
        int out;
        out=st->arr[st->top];
        st->top--;           
        printf("\n%d",out);   
    }
    
}

//Peek
int peek(struct stack * st)
{
    if(st->top == -1)
    {    
        printf("\nStack is empty");
        return;
    }
    
    int display;
    display=st->arr[st->top];     
    printf("\n%d",display);
}

//Display Stack
void display(struct stack * st)
{
    if((st->top)>=0)
    {
        printf("\n\nElements in the Stack\n");
        for(int i=st->top;i>=0;i--)          
            printf("%d ",st->arr[i]);
    }
    
    else
        printf("\nNo elements to Display");
}

int main()
{
    struct stack* st = (struct stack*)malloc(sizeof(struct stack)); 
    
    st->top=-1;
    printf("Enter a Stack size less than 100 : ");
    scanf("%d",&size);
    printf("\n\tStack Operations.....");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");

    do{
        printf("\nEnter Your Choice  ");
        scanf("%d",&choice);        
        switch(choice)
        {
        case 1:
            {
                push(st); break;
            }
        case 2:
            {
                pop(st); break;     
            }
        case 3:
            {
                peek(st); break;
            }
        case 4:
            {
                display(st);break;
            }
        case 5:
            {
                printf("\n\t EXIT Point");break;
            }
        default:
            printf("\nEnter a correct choice (1,2,3,4,5)");
        }}
    while(choice!=5);  
    return 0;
}
