/*
*
* En que direccion esta tu LCD ? usar el programa que escanea direcciones I2C
*/



#include <LiquidCrystal_I2C.h>
// Al compilar va a dar un Warning que se puede desestimar

// Seteamos columnas y filas del display (también vienen de 20x4)
int lcdColumns = 16;
int lcdRows = 2;

// seteo de dirección,columnas,filas del  LCD 
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

void setup(){
  // inicializo LCD
  lcd.init();
  // enciende backlight                      
  lcd.backlight();
}

void loop(){
  // ubica el cursor en primera columna, primera fila 
  lcd.setCursor(0, 0);
  // display mensaje
  lcd.print("Hello, World!");
  delay(1000);
  // limpia pantalla
  lcd.clear();
  // ubica el cursor en primera columna, segunda fila
  lcd.setCursor(0,1);
  lcd.print("Hello, World!");
  delay(1000);
  lcd.clear(); 
}
