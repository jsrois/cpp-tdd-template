//
// Created by jsanchez on 11/08/17.
//

#ifndef DEFAULT_NAME_YATZY_H
#define DEFAULT_NAME_YATZY_H
#include <array>
#include <algorithm>
#include <numeric>

typedef unsigned int Score;
const unsigned int numberOfDice = 5;

class Roll{
 public:
  const std::array<Score, numberOfDice> values;
  Score sum() const {
    return std::accumulate(values.begin(), values.end(), Score(0));
  }

  bool isUniform() const {
    return (std::count(values.begin(), values.end(), values.front())==values.size());
  }
};


class Yatzy {
 public:

  Score chance(const Roll& roll) const {
    return roll.sum();
  }

  Score yatzy(const Roll& roll) const {
    if (roll.isUniform()) {
      return Score(50);
    }
    return Score(0);
  }

  Score ones(const Roll& roll) const {
    return Score();
  }

};

#endif //DEFAULT_NAME_YATZY_H
