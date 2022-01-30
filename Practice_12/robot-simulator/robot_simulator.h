#if !defined(ROBOT_SIMULATOR_H)
#define ROBOT_SIMULATOR_H

namespace robot_simulator {
  enum class Bearing {
    NORTH,
    EAST,
    SOUTH,
    WEST
  };

  class Robot {
   public:
    /// std::pair is a class template that provides a way to store two heterogeneous objects as a single unit.
    /// We need use this class template because the conditions of the platform require it.
    Robot(const std::pair<int, int> position = {0, 0}, const Bearing bearing = Bearing::NORTH) 
          : x_(position.first), y_(position.second), bearing_(bearing) {};
    // Getters
    Bearing get_bearing() const { return bearing_; }
    std::pair<int, int> get_position() const { return std::make_pair(x_, y_); }
    void turn_right();
    void turn_left();
    void advance();
    void execute_sequence(const std::string& sentence);
   private:
    int x_; /// x position
    int y_; /// y position
    enum Bearing bearing_; /// Direction
  };
}  // namespace robot_simulator

#endif // ROBOT_SIMULATOR_H