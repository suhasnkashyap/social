#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int queue[20],n,head,i,j,k,mov=0,max,diff;
printf("enter the max range of disk : ");
scanf("%d",&max);
printf("enter the size of queue request : ");
scanf("%d",&n);
printf("enter the queue\n");
for(i=1;i<=n;i++)
 scanf("%d",&queue[i]);
printf("enter the initial head position : ");
scanf("%d",&head);
queue[0]=head;
printf(" FROM\t TO\t\t HEAD MOVEMENTS\n");
for(j=0;j<=n-1;j++){
diff=abs(queue[j+1]-queue[j]);
mov+=diff;
printf(" %d\t %d\t\t %d\n",queue[j],queue[j+1],mov);
} printf("total head movements is %d\n",mov);}
