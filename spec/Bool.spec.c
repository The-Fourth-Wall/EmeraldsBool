#include "Bool.spec.h"

module(T_Bool, {
    describe("Bool", {
        it("returns true", {
            bool v = true;
            assert_that(v is true);
        });

        it("returns false", {
            bool v = false;
            assert_that(v is false);
        });
    });
});

spec_suite({
    T_Bool();
});

spec({
    run_spec_suite("all");
});
