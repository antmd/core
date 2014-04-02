#include <core/algorithm.hpp>
#include <vector>

#include <unittest/unittest.hpp>

int main () {
  using namespace unittest;

  test("algorithm") = {
    task("all-of") = [] { assert::fail(); },
    task("any-of") = [] { assert::fail(); },
    task("none-of") = [] { assert::fail(); },
    task("for-each") = [] { assert::fail(); },
    task("count") = [] { assert::fail(); },
    task("count-if") = [] { assert::fail(); },
    task("mismatch") = [] { assert::fail(); },
    task("equal") = [] { assert::fail(); },
    task("find") = [] { assert::fail(); },
    task("find-if") = [] { assert::fail(); },
    task("find-if-not") = [] { assert::fail(); },
    task("find-end") = [] { assert::fail(); },
    task("find-first-of") = [] { assert::fail(); },
    task("adjacent-find") = [] { assert::fail(); },
    task("search") = [] { assert::fail(); },
    task("search-n") = [] { assert::fail(); },

    task("copy") = [] {
      std::vector<int> from { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
      std::vector<int> to { };
      std::ignore = core::copy(from, std::back_inserter(to));

      assert::equal(to[0], 0);
      assert::equal(to[1], 1);
      assert::equal(to[2], 2);
      assert::equal(to[3], 3);
      assert::equal(to[4], 4);
      assert::equal(to[5], 5);
      assert::equal(to[6], 6);
      assert::equal(to[7], 7);
      assert::equal(to[8], 8);
      assert::equal(to[9], 9);
    },

    task("copy-if") = [] { assert::fail(); },
    task("copy-backward") = [] { assert::fail(); },
    task("move") = [] { assert::fail(); },
    task("move-backward") = [] { assert::fail(); },
    task("fill") = [] { assert::fail(); },
    task("transform") = [] { assert::fail(); },
    task("remove") = [] { assert::fail(); },
    task("remove-if") = [] { assert::fail(); },
    task("remove-copy") = [] { assert::fail(); },
    task("remove-copy-if") = [] { assert::fail(); }
  };

  monitor::run();
}