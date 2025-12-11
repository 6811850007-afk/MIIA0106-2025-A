#include <iostream>
#include <string>

enum LinePosition {
    LEFT,     
    CENTER,    
    RIGHT,     
    OFF_LINE   
};
std::string positionToString(LinePosition pos) {
    switch (pos) {
    case LEFT: return "LEFT";
    case CENTER: return "CENTER";
    case RIGHT: return "RIGHT";
    case OFF_LINE: return "OFF_LINE";
    default: return "UNKNOWN";
    }
}
void controlRobot(LinePosition sensor_data) {
    std::cout << "Sensor Data Received: " << positionToString(sensor_data) << std::endl;
    std::cout << "-> Control Action: ";

    switch (sensor_data) {
    case LEFT:
        std::cout << "Turn Left (Adjust motor speed: Right motor faster, Left motor slower/stop)" << std::endl;
        break;
    case RIGHT:
        std::cout << "Turn Right (Adjust motor speed: Left motor faster, Right motor slower/stop)" << std::endl;
        break;
    case CENTER:
        std::cout << "Go Straight (Maintain equal speed on both motors)" << std::endl;
        break;
    case OFF_LINE:
        std::cout << "Stop (Line lost - Need Search/Recovery Logic)" << std::endl;
        break;
    default:
        std::cout << "Error: Unknown Sensor State" << std::endl;
        break;
    }
}
int main() {
    std::cout << "--- Line Follower Simulation ---" << std::endl;
    std::cout << "\n--- Scenario 1: Following the line (Center) ---" << std::endl;
    controlRobot(CENTER);
    std::cout << "\n--- Scenario 2: Drifting Left (Need Right Turn) ---" << std::endl;
    controlRobot(RIGHT);
    std::cout << "\n--- Scenario 3: Drifting Right (Need Left Turn) ---" << std::endl;
    controlRobot(LEFT);
    std::cout << "\n--- Scenario 4: Lost Line ---" << std::endl;
    controlRobot(OFF_LINE);
    return 0;
}