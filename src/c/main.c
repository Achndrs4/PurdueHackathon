#include <pebble.h>
#include "src/c/splash_window.h"
#include "src/c/main_window.h" 

int main(){
  
  splash_window_create();
  main_window_create();
  window_stack_push(splash_window_get_window(),1);
  app_event_loop();
  splash_window_destroy();
  
  
  
  
  
  
  
  
  
}