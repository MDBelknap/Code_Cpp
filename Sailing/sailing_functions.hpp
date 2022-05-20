#include <string>

//this funtion process the wind direction and point of sail and outputs a tack based on the angle between the two. Irons generates no speed or heel; close haled, the most speed and heel; beam reach and broad run, medium speed and heel.
 std::string POSail (int windDir, int& pointOS);
 std::string  WindDircetion (int windDir);
double trim_calc(int trim, int windSpeed, std::string tack);
