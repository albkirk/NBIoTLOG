// **** Project code definition here ...
#include <modem.h>

void project_hw() {
 // Output GPIOs


 // Input GPIOs

}


void project_setup() {

  // Modem Setup and start
    modem_setup(); 
    if (config.HW_Module) modem_start();
}

void project_loop() {
  // Modem handling
    modem_loop();
}
