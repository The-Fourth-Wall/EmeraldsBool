#ifndef __BOOL_SPEC_H_
#define __BOOL_SPEC_H_

#include "../libs/cSpec/export/cSpec.h"
#include "standard_boolean/standard_boolean.module.spec.h"

spec_suite({ T_Bool(); });

int main(void) { run_spec_suite("all"); }

#endif
