#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define sensor_temp A0
#define sensor_luz A1
#define sensor_vib 2

void setup() {
  Serial.begin(9600);
  pinMode(sensor_vib, INPUT);
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Capsula Espacial");
  delay(2000);
  lcd.clear();
}

void loop() {
  // TEMPERATURA
  int leitura = analogRead(sensor_temp);
  float tensao = leitura * (5.0 / 1023.0);
  float temperatura = (tensao - 0.5) * 100.0;

  // LUMINOSIDADE
  int luminosidade = analogRead(sensor_luz);

  // VIBRAÇÃO
  int vibracao = digitalRead(sensor_vib);

  // EXIBE NO LCD - Linha 1: Temp e Luz
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temperatura, 1);
  lcd.print("C L:");
  lcd.print(luminosidade);
  lcd.print("   ");

  // EXIBE NO LCD - Linha 2: Vibração
  lcd.setCursor(0, 1);
  lcd.print("Vib: ");
  if (vibracao == HIGH) {
    lcd.print("DETECTADA   ");
  } else {
    lcd.print("Normal      ");
  }

  // SERIAL MONITOR
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");
  Serial.print("Luminosidade: ");
  Serial.println(luminosidade);
  Serial.print("Vibracao: ");
  Serial.println(vibracao == HIGH ? "Detectada" : "Nao detectada");
  Serial.println("------------------");

  delay(1000);
}