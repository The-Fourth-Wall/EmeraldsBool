#include "../../libs/cSpec/export/cSpec.h"
#include "../../src/standard_boolean/standard_boolean.h"

module(T_Bool, {
  describe("EmeraldsBool", {
    it("returns true", {
      bool v = true;
      assert_that(v is true);
    });

    it("returns false", {
      bool v = false;
      assert_that(v is false);
    });
  });
})
