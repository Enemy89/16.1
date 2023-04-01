#include <iostream>
bool compare(double value, double compared, double epsilon) {
    return (value>=compared-epsilon) && (value<=compared+epsilon);
}

int main() {
    char current_speed [6] = "0";
    char user_speed [6];
    float temp_speed=0;
  do {
      std::cout<<"Speed: "<<current_speed<<std::endl;
      std::cout<<"Enter the speed difference: \n";
      std::cin>>user_speed;
      if(user_speed[0]>=0 && user_speed[0]<=9) {
          temp_speed = std::stof(current_speed) - std::stof(user_speed);
         // std::cout<<temp_speed<<std::endl;
          sprintf(current_speed, "%.1f", temp_speed);
      }
      else {
        //  std::cout<<temp_speed<<std::endl;
          temp_speed = std::stof(current_speed) + std::stof(user_speed);
        //  std::cout<<std::stof(current_speed)<<std::endl;
         // std::cout<<std::stof(user_speed)<<std::endl;
          sprintf(current_speed,"%.1f", temp_speed);
      }
  }
  while (!compare(atof(current_speed), 0, 0.01) && atof(current_speed)<150);
}