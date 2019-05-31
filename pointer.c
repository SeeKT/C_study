#include <stdio.h>
int main()
{
  int X = 1234;
  int *apnt;
  apnt = &X;
  printf("%d\n", apnt); /* アドレス値が入っている */
  printf("%d\n", *apnt);  /* Xのアドレスで指されている値の1234が入る */
  *apnt = *apnt + 44;
  printf("%d\n",X); /* Xのアドレスで指されている値に44を加えた1278が入る */
  return 0;
}
