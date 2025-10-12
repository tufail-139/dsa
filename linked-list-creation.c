#include<stdio.h>
struct Student{
   int rollNo;
   char name[50];
   struct Student *next;
};
int main(){
   struct Student s1,s2,s3;
  
   printf("Enter the rollNo,Name of student 1\n");
   scanf("%d %s", &s1.rollNo,s1.name);

   printf("Enter the rollNo,Name of student 2\n");
   scanf("%d %s", &s2.rollNo,s2.name);

   printf("Enter the rollNo,Name of student 3\n");
   scanf("%d %s", &s2.rollNo,s2.name);

   s1.next = &s2;
   s2.next = &s3;
   s3.next = NULL;

   struct Student *header;

   header = &s1;

   //Traversal

   struct Student *p;

   p= header;
   while(p->next != NULL){
      printf("Roll no. : %d Name : %s ",p->rollNo,p->name);
      p=p->next;
   }
}
   