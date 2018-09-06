#include <stdio.h>
#include "dict.h"
#include "sds.h"

extern dictType BenchmarkDictType;

int main(int argc, char *argv[])
{
  dict *di = dictCreate(&BenchmarkDictType, NULL);
  int retval = dictAdd(di, sdsfromlonglong(1), (void *)1);
  printf("retval:%d\n", retval);
  return 0;
}
