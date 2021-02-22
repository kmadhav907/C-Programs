#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *rlink;
    struct node *llink;
};
typedef struct node *NODE ;
NODE getnode()
{ NODE X;
    X=(NODE)malloc(sizeof(struct node));
    if(X==0)
    {
         printf("Memory not available");
    }
        return (X);
}
void freenode(NODE X)
{
    free(X);

}
 NODE insert(int item, NODE root)
 {
     NODE temp,cur,prev;
     temp=getnode();
     temp->info=item;
     temp->llink=temp->rlink=NULL;
     if(root==NULL)
     {
         return temp;
     }
     prev=NULL;
     cur=root;
     while(cur!=NULL)
     {
         prev=cur;
         {
             if(item==cur->info)
                {printf("Duplicate items not allowed\n");
               free(temp);
               return root;}
         }
         if(item<cur->info)
         {
             cur=cur->llink;
         }
         else
         {
             cur=cur->rlink;
         }
     }
     if(item<prev->info)
     {
         prev->llink=temp;
     }
     else
     {
       prev->rlink=temp;
     }
     return root;
 }
NODE search (NODE root,int item)
{
    if(root==NULL)
    {
        return root;
    }
    while(root!=NULL)
    {
        if(item==root->info)
            break;
        if(item<root->info)
            root=root->llink;
        else
            root=root->rlink;
    }
    if(root==NULL)p
    {
        printf("Item not found \n");
        return root;
    }
    printf("Key found\n");
    return root;
}
void max(NODE root)
{
    NODE cur;
    if(root==NULL)
    {
        return ;
    }
    cur=root;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    printf("Maximum:%d ",cur->info);
}
void inorder(NODE root)
{
    if(root==NULL)
    {
     return;
    }

    inorder(root->llink);
     printf("%d\t",root->info);
    inorder(root->rlink);


}
int main()
{
   NODE root=NULL;
    int ch,item;

    printf("1.Insert\t 2.Inorder\t 3.Search\t 4.Maximum\t 5.Exit\n");
    for(;;)
    {
        printf("\nEnter choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the item : ");
                    scanf("%d",&item);
                    root=insert(item,root);
                    break;

             case 2 : printf("Inorder : \n");
                     inorder(root);
                     break;
             case 3: printf("Enter the item to be searched :");
                     scanf("%d",&item);
                     root=search(root,item);
                     break;
             case 4: max(root);


            case 5 : exit(0);
        }
    }
    return 0;
}
