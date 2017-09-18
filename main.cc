#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "log.h"

int main(void)
{
  char *p = (char *)"hello, world";
  int a = 3000;
  char str[20];

  snprintf(str, sizeof(str), "%s->%d", p, a);

  LOG_INFO("%d", a);
  LOG_ERROR("%s", p);
  LOG_INFO("%s",str);

}
