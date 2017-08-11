//
// Created by jsanchez on 10/08/17.
//
#include <catch/catch.hpp>
#include <numeric>
#include "../src/Yatzy.h"

TEST_CASE("Yatzy", "[unit]") {
  SECTION("CHANCE score is the sum of all dice", "[unit]") {
    REQUIRE(Score(15) == Yatzy().chance(Roll{1, 2, 3, 4, 5}));
  }

  SECTION("YATZY score is 50 if all dice have the same number", "[unit]") {
    REQUIRE(Score(50) == Yatzy().yatzy(Roll{2, 2, 2, 2, 2}));
    REQUIRE(Score(0) == Yatzy().yatzy(Roll{1, 2, 3, 4, 5}));
  }

  SECTION("in ONES, the score is the number of ones") {
    REQUIRE(Yatzy().ones(Roll{1,2,1,3,5}) == Score(2));
  }
}


TEST_CASE("Roll", "[unit]") {

  SECTION("computes the sum of the dice") {
    Roll r{1, 2, 3, 4, 5};
    REQUIRE(r.sum() == Score(15));
  }

  SECTION("is uniform when all dices are the same") {
    REQUIRE((Roll{2, 2, 2, 2, 2}).isUniform());
  }

}