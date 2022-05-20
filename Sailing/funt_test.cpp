#include <string>
#include <iostream>


double trim_calc(int trim, int windSpeed, std::string tack){
    double close[] = {1.1, 0.9, 0.7, 0.5 };
    double beam[] = {0.8, 1, 0.8, 0.6};
    double broad[] = {0.5, 0.7, 0.8, 0.7};
    double run[] = {0.4, 0.6, 0.8, 1};
    double x;
    
    if(tack == "close haul"){
        x = close[trim] * windSpeed;
        }
    else if(tack == "beam reach"){
        x = beam[trim] * windSpeed;
    }
    else if(tack == "broad run"){
        x = broad[trim] * windSpeed;
    }
    else if(tack == "run"){
        x = run[trim] * windSpeed;
    }
   return x;
}

int main(){
    int trim = 2;
    int windSpeed = 7;
    std::string tack = "close haul";
    double y = trim_calc(trim, windSpeed, tack);
    std::cout << y << "\n";

}
