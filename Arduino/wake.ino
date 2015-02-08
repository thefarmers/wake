//Vist http://www.14blog.com/archives/1358 for more..

#include <virtuabotixRTC.h> 
#include <IIC_without_ACK.h>
#include "oledfont.c"   //codetab

#define OLED_SDA 9
#define OLED_SCL 10

IIC_without_ACK lucky(OLED_SDA, OLED_SCL);//9 -- sda,10 -- scl
//5sck 6io 7ce
virtuabotixRTC myRTC(6, 7, 8);

void setup()
{
  Serial.begin(9600);
  lucky.Initial();
   lucky.Fill_Screen(0x00);
  delay(10);
   myRTC.setDS1302Time(00, 59, 23, 6, 10, 1, 2014);
}

void loop()
{
 /*
  
  //loading 
   delay(2000);
  lucky.Char_F6x8(0,0,"My brains is");
  lucky.Char_F6x8(0,2,"LOADING");
  for(int x = 0;x<5;x++){
  for(int i = 44; i< 50;i++){
  lucky.Char_F6x8(i,2," ");
  lucky.Char_F6x8(i-1,2,".");
  delay(400);  
  }
  lucky.Char_F6x8(49,2," ");
  }
  delay(100);
   
  //mathix
  lucky.Fill_Screen(0x00);
  for(int i = 10;i>=0;i--){
  lucky.Char_F6x8(0,i,"l");
  delay(40);
  }
  delay(1000);
  lucky.Char_F6x8(7,0,"My name is FARM");
  delay(1000);
  lucky.Char_F6x8(7,2,"Electronics Engineer");
  delay(1000);
  lucky.Char_F6x8(7,4,"form");
  delay(1000);
  for(int i = 90;i>=40;i--){
  lucky.Char_F6x8(i,4,"KMITL");
  lucky.Char_F6x8(i+30,4," ");
  delay(10);
  }
  delay(1000);
  lucky.Char_F6x8(7,6,"Hello,World!");
  
  */
  while(1){
  lucky.Fill_Screen(0x00);
   //time
  myRTC.updateTime();
  Serial.println(myRTC.seconds);   
  char farm = myRTC.seconds;
 // lucky.Char_F6x8(7,0,&farm);
  delay(1000);
  }
  
}
