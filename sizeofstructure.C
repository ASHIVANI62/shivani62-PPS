#include<stdio.h>

struct stud {
   int roll;
   char name[10];
   int marks;
};

int main() {
   int size;
   struct stud s;
   
   size = sizeof(s);
   printf("nSize of structure : %d", size);
   
   return(0);
}
