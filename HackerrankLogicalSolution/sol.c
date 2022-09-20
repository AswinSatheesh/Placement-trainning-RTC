#include<stdio.h>
  int main()
{
int a,b,c,k[10];
int p[10]={0};
int bb[10]={0};
printf("Enter the limit of the array:\n");
scanf("%d\n",&a);
for(b=0;b<a;b++)
{
    scanf("%d",&k[b]);

}
for(b=a-1;b>0;b--)
{
    for(c=b-1;c>=0;c--)
    {
        if((k[b]==k[c])&&(bb[c]==0))
        {
            p[b]=p[b]+1;
            bb[c]=1;
        }
    }
}
    for(c=0;c<a;c++)
        {
        if(p[c]!=0)
        {
            printf("%d is coming %d times\n",k[c],p[c]+1);
        }
    }
    return 0;
}