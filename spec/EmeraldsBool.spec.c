#include "../libs/cSpec/export/cSpec.h"
#include "standard_boolean.module.spec.h"

int main(void) {
  cspec_run_suite("all", { T_Bool(); });
}
