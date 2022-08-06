#include<stdio.h>
#include<stdlib.h>

#define QUEUE_SIZE 5

typedef struct queue
{
    int items[QUEUE_SIZE];
    int front;
    int rear;
}QUEUE;


int insert_rear(int item,QUEUE *q)
{
    if (q->rear==QUEUE_SIZE-1)
    {
        printf("\nQueue full, insertion at the rear end not possible\n");
        return 0;
    }
    (q->rear)++;
        q->items[q->rear] = item;
}
int delete_front(QUEUE *q)
{
    if (q->front > q->rear)
    {
        printf("\nQueue is empty, deletion not possible\n");
        return 0;
    }
    printf("\nthe element is %d\n", q->items[q->front]);
    (q->front)++;
    if (q->front > q->rear)
    {
        q->front = 0;
        q->rear = -1;
    }
}
int display(QUEUE *q)
{
    int i;
    if(q->front > q->rear)
    {
            printf("\nQueue is emty, cannot display the contents\n");
            return 0;
    }
        printf("\nQueue contents are: \t");
        for(i=q->front; i<=q->rear;i++)
        {
            printf("%d\t",q->items[i]);
        }
}

int main()
{
    QUEUE q;
    q.front = 0;
    q.rear = -1;
    int input,item;
    for(;;){
        printf("\n\n1 to insert rear");
        printf("\n2 to delete front");
        printf("\n3 to display the contents");
        printf("\n4 to exit");
        printf("\n\nenter the choice: ");
        scanf("%d",&input);
        switch(input)
        {
            case 1: printf("Enter the item to inserted: ");
                    scanf("%d",&item);
                    insert_rear(item,&q);
                    display(&q);
                    break;
            case 2: delete_front(&q);
                    display(&q);
                    break;
            case 3: display(&q);
                    break;
            case 4: exit(0);
            default: printf("invalid input");continue;
        }
    }
}
