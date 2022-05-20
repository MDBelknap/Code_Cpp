#include <iostream>
#include <string>

std::string POSail (int windDir, int& pointOS)
{ 

  int diff;
  std::string sailDir = "";
  if (pointOS >= windDir)
    {
      diff = pointOS - windDir;
      // std::cout << diff << "\n";
    }
  else if (pointOS < windDir)
    {
      diff = windDir - pointOS;
      //std::cout << diff << "\n";
    }
  if (diff < 40 || diff > 320)
    {
      sailDir = "irons";
    }
  else if ((diff >= 40 && diff < 45) || (diff > 315 && diff <= 320))
    {
      sailDir = "luffing";
    }
  else if ((diff >= 45 && diff < 60) || (diff > 300 && diff <= 315))
    {
      sailDir = "close hauled";
    }
  else if ((diff >= 60 && diff < 120) || (diff > 240 && diff <= 300))
    {
      sailDir = "beam reach";
    }
  else if ((diff >= 120 && diff < 165) || (diff > 195 && diff <= 240))
    {
      sailDir = "broad reach";
    }
  else
    {
      sailDir = "run";
    }
  return sailDir;
}
std::string WindDircetion (int windDir)
{
  std::string compDir = "";
  int dir = windDir % 360;
  if (dir < 22 || dir >= 337)
    {
      compDir = "North";
    }
  else if (dir >= 22 && dir < 67)
    {
      compDir = "North East";
    }
  else if (dir >= 67 && dir < 112)
    {
      compDir = "East";
    }
  else if (dir >= 112 && dir < 157)
    {

      compDir = "South East";
    }
  else if (dir >= 157 && dir < 202)
    {
      compDir = "South";
    }
  else if (dir >= 202 && dir < 247)
    {
      compDir = "South West";
    }
  else if (dir >= 247 && dir < 292)
    {
      compDir = "West";
    }
  else if (dir >= 292 && dir < 337)
    {
      compDir = "North West";
    }
  return compDir;
}


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

