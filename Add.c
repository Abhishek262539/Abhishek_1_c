#include<stdio.h>
struct address
{
char city[10];
int pin;
};
struct person
{
  char name[20];
struct address addr;
};
int mainl()
{
  struct person p
  printf("enter name");
  scanf("%s",p.name);
  printf("enter city");
  scanf("%s",p.addr.city);
  printf("enter pin");
  scanf("%d",p.addr.pin);
 printf("\nperson detail:")
   printf("name:%s\ncity:%s\npin:%d\n",p.name,p.addr.city,p.addr.pin);
  return 0;
}
