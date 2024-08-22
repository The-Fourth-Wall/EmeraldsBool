#ifndef __STANDARD_BOOLEAN_H_
#define __STANDARD_BOOLEAN_H_

#include "../../libs/EmeraldsPreprocessor/export/EmeraldsPreprocessor.h"

/** @param bool -> A 'big' enough size to hold both 1 and 0 **/
#if PREPROCESSOR_C_VERSION < 2023
  #define bool  unsigned char
  #define true  1
  #define false 0
#else
  #include <stdbool.h>
#endif

#endif
