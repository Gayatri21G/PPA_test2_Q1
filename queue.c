//Q.Implement a queue using linked list

#include<stdio.h>
#include<stdlib.h>
#define nodealloc (struct qnode *)malloc(sizeof(struct qnode))
typedef struct qnode
{
	int data;
	struct qnode *next;
}QUEUE;
QUEUE *front=NULL;
QUEUE *rear=NULL;
void enQueue()
{
    QUEUE *rear,*p;
        p=nodealloc;
        printf("\n Enter num:");
	scanf("%d",&p->data);
            p->next=NULL;
        if(rear==NULL)
        {
            front=rear=p;
	}
	else
	{
		rear->next=p;
		rear=p;
	}
}
void deQueue()
{
    QUEUE *p;
    int num;
    if(front==NULL)
    {
        return;
    }
    else
    {
        p=front;
        front=front->next;
        free(p);
    }
}
void peek()
{
     QUEUE *p;
     int num;
     if(front==NULL)
     {
         return;
     }
     else
     {
	 p=front;
	 printf("%d",p->data);
     }
 }
void display()
{
    QUEUE *p=front;
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
}
int main()
{   
    int ch;
    do
    {
	printf("\n MENU");
	printf("\n 1.enQueue");
	printf("\n 2.deQueue");
	printf("\n 3.display");
	printf("\n 4.peek");
	printf("\n 5.exit");
	printf("\n Enter choice:");
       scanf("%d",&ch);

    switch(ch)
    {
        case 1:enQueue();
	       break;
	case 2:deQueue();
	       break;
	case 3:display();
               break;
	case 4:peek();
	       break;
	case 5:exit(0);
	default:
	       printf("\n Invalid choice");
      }
      }while(ch!=6);
    return 0;
} 
                                                                                                                              
                                                         
/*Output:-
      gayatri@ideapad320:~/Preparation/pc_os_folder/test2$ ./a.out

 MENU
 1.enQueue
 2.deQueue
 3.display
 4.peek
 5.exit
 Enter choice:1

 Enter num:10

 MENU
 1.enQueue
 2.deQueue
 3.display
 4.peek
 5.exit
 Enter choice:1

 Enter num:20

 MENU
 1.enQueue
 2.deQueue
 3.display
 4.peek
 5.exit
 Enter choice:1

 Enter num:30

 MENU
 1.enQueue
 2.deQueue
 3.display
 4.peek
 5.exit
 Enter choice:3
10	20	30	
 MENU
 1.enQueue
 2.deQueue
 3.display
 4.peek
 5.exit
 Enter choice:2

 MENU
 1.enQueue
 2.deQueue
 3.display
 4.peek
 5.exit
 Enter choice:3
20	30	
 MENU
 1.enQueue
 2.deQueue
 3.display
 4.peek
 5.exit
 Enter choice:4
20
 MENU
 1.enQueue
 2.deQueue
 3.display
 4.peek
 5.exit
 Enter choice:5
gayatri@ideapad320:~/Preparation/pc_os_folder/test2$ 

*/
