#include<stdio.h>

int main()
{
   char *pc;
   int *pi;
   double *pd;

   pc = (char *)100000;
   pi = (int *)100000;
   pd = (double *)100000;
   printf("포인터 초기 주소값 pc : %d, pi : %d, pd : %d\n", pc, pi, pd);

   pc++;
   pi++;
   pd++;
   printf("포인터 증가 후 주소값 pc : %d, pi : %d, pd : %d\n", pc, pi, pd);
// char = 1byte, int = 4byte, double = 8byte 로 연산이 일어남. 
   printf("포인터 감소 후 주소값 pc : %d, pi : %d, pd : %d\n", pc-2, pi-2, pd-2);
   return 0;
}
