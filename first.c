#include<stdio.h>
#include<stdlib.h>
struct header
{
  int row;
  int column;
  int value;
  struct node *start;
};
struct node
{
  int r;
  int c;
  int v;
  struct  node *next;
};
int main()
{
  int c=0, arr[5][5],m,n;
  printf("\n Enter the number of rows and column ");
  scanf("%d %d",&m,&n);
  printf("\n Enter the elements in the array ");
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(arr[i][j]!=0)
      {
        c++;
      }
    }
  }
  struct header *t ;
  t=(struct header *)malloc(sizeof(struct header));
  printf("\n Enter the values ");
  t->row=m;
  t->column=n;
  t->value=c;
  t->start=NULL;
  struct node *temp,*p,*k;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(arr[i][j]!=0)
      {
  temp=(struct node *)malloc(sizeof(struct node));
  temp->r=i;
  temp->c=j;
  temp->v=arr[i][j];
  temp->next=NULL;
  if(t->start==NULL)
  {
  t->start=temp;
  p=temp;
}
else
{
  p->next=temp;
  p=temp;
}
}
}
}
printf("\n 3 Tupple Matrix is \n");
printf("%d %d %d\n",t->row,t->column,t->value);
k=t->start;
while(k!=NULL)
{
  printf("%d %d %d\n",k->r,k->c,k->v);

k=k->next;
}
}
