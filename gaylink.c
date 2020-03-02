///////////simple drive forward
////////////and turn right code

#include <kipr/wombat.h>

int main()
{
  create_connect();////////connects wombat to irobot
  
  create_drive_direct(250, 250);//////commas separates the speeds the left and right motors
  ////////create_drive_direvt(Left, Right);
  
  msleep(1900);///sets the time for how long you want to have the create drive foward
  
  create_drive_direct(-200, 375);////////uses the same drive function but turns when you give a negative value to one of the motors
  
  msleep(600);//////set the time for the irobot to turn
    
  create_drive_direct(650,900);
      
  msleep(3500);
  
  create_disconnect();//////disconnects from the irobot

  return 0; 
}
