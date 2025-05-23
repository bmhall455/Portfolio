#include <iostream>
#include <string>
#include <fstream>

using namespace std;
// Byron Hall
// project to develop Autonomous Obstacle Detection Simulator


int main () {
    // defining variables in text file
    double sensor_data1 = 25.0;
    double sensor_data2 = 18.5;
    double sensor_data3 = 22.0;
    double sensor_data4 = 15.0;
    double sensor_data5 = 30.0;
    // adding text file
    ofstream bird("sensor_data.txt");
    bird << sensor_data1 << endl
         << sensor_data2 << endl
         << sensor_data3 << endl
         << sensor_data4 << endl
         << sensor_data5 << endl;
    cout << "\nFile Created" << endl;






}

