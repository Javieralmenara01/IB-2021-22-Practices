#include <string>
#include <stdexcept>
#include "robot_simulator.h"

namespace robot_simulator {
  /// Turn right the object of Robot class
  void Robot::turn_right() {
    if (get_bearing() == Bearing::NORTH) {
      bearing_ = Bearing::EAST;
    } else if (get_bearing() == Bearing::EAST) {
      bearing_ = Bearing::SOUTH;
    } else if (get_bearing() == Bearing::SOUTH) {
      bearing_ = Bearing::WEST;
    } else {
      bearing_ = Bearing::NORTH;
    }
  }
  
  /// Turn left the object of Robot class
  void Robot::turn_left() {
    if (get_bearing() == Bearing::NORTH) {
      bearing_ = Bearing::WEST;
    } else if (get_bearing() == Bearing::WEST) {
      bearing_ = Bearing::SOUTH;
    } else if (get_bearing() == Bearing::SOUTH) {
      bearing_ = Bearing::EAST;
    } else {
      bearing_ = Bearing::NORTH;
    }
  }
  
  /// Let move to the object of Robot class
  void Robot::advance() {
    if (get_bearing() == Bearing::NORTH) {
      y_ += 1;
    } else if (get_bearing() == Bearing::SOUTH) {
      y_ -= 1;
    } else if (get_bearing() == Bearing::EAST) {
      x_ += 1;
    } else {
      x_ -= 1;
    }
  }
  
  /// Read and execute a sequence for a object of Robot class
  void Robot::execute_sequence(const std::string& sentence) {
    for (size_t i{0}; i < sentence.size(); ++i) {
      if (sentence[i] == 'R') {
        turn_right();
      } else if (sentence[i] == 'L') {
        turn_left();
      } else if (sentence[i] == 'A') {
        advance();
      }
    }
  }
}  // namespace robot_simulator