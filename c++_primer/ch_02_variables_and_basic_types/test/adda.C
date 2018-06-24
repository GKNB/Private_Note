#include "declare03.h"

//be careful, definition of a is in main03.C, but we can still compile this file, since a is declared somewhere (in head file)
int adda(int l)
{
  return l + a;
}

