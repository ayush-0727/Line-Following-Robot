#include "alphabot_drivers.h"
#include "line_follower.h"

#define NUM_SENSORS 5

int sensorValues[NUM_SENSORS];
Line_follower__main_out _res;
Line_follower__main_mem _self;

void setup()
{
  init_devices();
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  Line_follower__main_reset(&_self);
  Serial.begin(115200);
  Serial.println("White Line following and Switching!!");  
}

int obj_det = 0;
int ir1 = 0, ir2 = 0;
int turnCount = 0;
void loop()
{
  //Serial.println(turnCount);
  Serial.print(digitalRead(IR1));
  Serial.print(" ");
  Serial.print(digitalRead(IR2));
  Serial.print(" ");
  Serial.print(ir_read());
  Serial.print(" ");
  Serial.print(_res.st);
  Serial.print(" ");
  Serial.print(_res.v_l);  
  Serial.print(" ");
  Serial.println(_res.v_r);  
  
  if(digitalRead(IR1) == LOW)
  {
    ir1 = 1;
    beep_on();
  }
  else
  {
    ir1 = 0;
    beep_off();
  }

  if(digitalRead(IR2) == LOW)
  {
    ir2 = 1;
    beep_on();
  }
  else
  {
    ir2 = 0;
    beep_off();
  }
  
  AnalogRead(sensorValues);
    
  for (int i = 0; i < NUM_SENSORS; i++)
  {
    if((i < 5 and sensorValues[i] <= 500)){
      sensorValues[i] = 0;
    }
    if((i < 5 and sensorValues[i] > 500)){
      sensorValues[i] = 1000;
    }
  } 

  if(ir_read() == 'b'){
    stop();
    SetSpeed(0,0);
    beep_on();
    delay(60);

    backward(); // backward
    SetSpeed(60,60);
    beep_off();
    delay(400);
    
    forward(); // first right
    right();
    SetSpeed(0,60);
    beep_off();
    delay(500);

    stop();
    SetSpeed(0,0);
    delay(600);
       
    forward();
    SetSpeed(60,60);
    beep_off();
    delay(600);
    
    stop();
    SetSpeed(0,0);
    delay(400);

    obj_det = 1;
  }
  else
  {
    obj_det = 0;
  }
  
    
  Line_follower__main_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4], obj_det, ir1, ir2, &_res, &_self);
  
  if(_res.black_line and _res.sum >= 3000){
    switch(turnCount){
      case 0:
          forward();
          SetSpeed(0, 60);
          delay(450);
          stop();
          turnCount += 1;
          break;
      case 1:
          forward();
          SetSpeed(0, 60);
          delay(450);
          stop();
          turnCount += 1;
          break;

      default:
          forward();
          SetSpeed(60, 0);
          delay(450);
          stop();
          delay(50);
          turnCount += 1;
          break; 
    } 
  }
  else{
   switch(_res.dir){
      case 1:
            forward();
            SetSpeed(_res.v_r, _res.v_l);
            break;
      case 2:
            left();
            SetSpeed(60,60);
            delay(50);
            break;
      case 3:
            right();
            SetSpeed(60,60);
            delay(50);
            break;
      default:
            stop();
            SetSpeed(0, 0);
    }
  }
}
