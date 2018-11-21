#include <LiquidCrystal.h>
LiquidCrystal LCD(10,9,5,4,3,2);
int i=0;
void setup()
{
  LCD.begin(16,2);
  LCD.setCursor(0,0);
  LCD.print("My timer");
}
void loop()
{
  for (i=1;i<=10;i++)
  {
    LCD.setCursor(0,1);
    LCD.print("                ");
    LCD.setCursor(0,1);
    LCD.print(i);
    LCD.print(" seconds");
    delay(1000);
  }
  for (i=10;i>=1;i--)
  {
    LCD.setCursor(0,1);
    LCD.print("                ");
    LCD.setCursor(0,1);
    LCD.print(i);
    LCD.print(" seconds");
    delay(1000);
  }
}
