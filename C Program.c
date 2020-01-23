#include <stdio.h>
int main()
{
  int choice;
  scanf("%d",&choice);
  while(choice--)
  {
    int size;
    scanf("%d",&size);
    int ar[size];
    for(int i=0; i<size; i++)
      scanf("%d",&ar[i]);
    int temp, count=0;
  for(int i=0; i<size; i++)
  {
    for(int j=0; j<size; j++)
    {
      if(ar[j]>ar[j+1])
      {
        temp=ar[j+1];
        ar[j+1]=ar[j];
        ar[j]=temp;
        count++;
      }
    }
  }
  printf("%d\n",count);
  }
    return 0;
}
