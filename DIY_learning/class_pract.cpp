#include <iostream>
#include <string>


class Sailboat{

    public:
        int heading; //direction the boat is headed
        double boatSpeed;   //the boats speed over ground
        std::string tack;   //the name of the tack the boat is on
        int heel;
        int sailTrim;

   
    bool valid_heading(int new_heading){
        if (new_heading > 0 && new_heading < 361){
            heading = new_heading;
            return true;
        }
        else{
            return false;
        }
    }
    std::string calc_tack(int wind_dir, int heading){
        int diff;
        
        if (heading >= wind_dir)
    {
        diff = heading - wind_dir;
        // std::cout << diff << "\n";
    }
        else if (heading < wind_dir)
    {
        diff = wind_dir - heading;
        //std::cout << diff << "\n";
    }
        if (diff < 40 || diff > 320)
    {
        tack = "irons";
    }
        else if ((diff >= 40 && diff < 45) || (diff > 315 && diff <= 320))
    {
        tack = "luffing";
    }
        else if ((diff >= 45 && diff < 60) || (diff > 300 && diff <= 315))
    {
        tack = "close hauled";
    }
        else if ((diff >= 60 && diff < 120) || (diff > 240 && diff <= 300))
    {
        tack = "beam reach";
    }
        else if ((diff >= 120 && diff < 165) || (diff > 195 && diff <= 240))
    {
        tack = "broad reach";
    }
        else
    {
        tack = "run";
    }
    return tack;
}
double calc_heal(std::string tack, double windSpeed){
    if (tack == "close haul"){
        return windSpeed * 1.75;
    }
    else if (tack == "beam reach"){
        return windSpeed * 1.2;
    }
    else if (tack == "broad run"){
        return windSpeed * .8;
    }
    else{
        return windSpeed * .2;
    }
}

};
class Weather{
    double windSpeed;
    int windDir;

    public:

    double get_windSpeed(){
        return windSpeed;
    }
    void set_windSpeed(double new_speed){
        windSpeed = new_speed;
    }
    int get_windDir(){
        return windDir;
    }
    void set_windDir(int new_dir){
        windDir = new_dir;
    }

};





int main(){

Sailboat sailboat;
int wind_Dir = 140;
int windSpeed = 12;
int new_heading;
std::cout << "Enter a heading for the boat: ";
std::cin >> new_heading;
while (!sailboat.valid_heading(new_heading)){
    std::cout << "try again: \n";
    std::cin >> new_heading;
}

std::cout << "the couse you have set is: "<< sailboat.heading << "\n";
std::cout << "On a " << sailboat.calc_tack(wind_Dir, sailboat.heading) << " tack.\n";
std::cout << "The boat is healing " << sailboat.calc_heal(sailboat.tack, windSpeed) << "degrees.\n";
}

