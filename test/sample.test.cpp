//
// Created by Javi on 1/4/17.
//

#include <catch/catch.hpp>
#include <sample.h>

TEST_CASE("SampleClass","[sample]") {
    REQUIRE(Sample().check());
}