#include <iostream>
#include <string>
#include <fstream>

using namespace std;
// Byron Hall
// project to develop Autonomous Obstacle Detection Simulator


int main () {
    // defining reading threshold (in meters)
    double sensor_threshold = 20.0;
    double sensor_value;


    // open sensor data for reading
    ifstream sens_read("sensor_data.txt");
    // confirm file exist
    if (!sens_read){
        cerr << "\nsensor_data.txt file does NOT exist" << endl;
        return 1;
    }
    // open result log file to confirm it exist
    ofstream result("vehicle_log.txt");
    if (!result){
        cerr << "\vehicle_log.txt file does NOT exist" << endl;
        return 1;
    }
    // loop forreading every line in file and reading signal reading
    while(sens_read >> sensor_value){
        // get sensor value from sensor_data.txt file
        int speed = 55;
        if (sensor_value < sensor_threshold){ 
            result << "\nYou are at a safe distance for this reading: " << sensor_value << ". Maintain speed of: " << speed << " mph" << endl;
        }else {
            speed -= 3;  
            result << "\nYou are NOT at a save distance for this reading: " << sensor_value << ". Speed adjusted to: " << speed << " mph" << endl;
        }
    }
    // close files rule of thumb
    sens_read.close();
    result.close();


return 0;
}

