#ifndef __STANDARD_BOOLEAN_H_
#define __STANDARD_BOOLEAN_H_

/** @param bool -> A 'big' enough size to hold both 1 and 0 **/
#if __STDC_VERSION__ < 202000L
  #define bool  unsigned char
  #define true  1
  #define false 0
#else
  #include <stdbool.h>
#endif

#endif
