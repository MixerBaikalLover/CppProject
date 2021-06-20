#include <Servo.h>
 

 
Servo firstESC, secondESC, thirdESC, fourthESC, fifthESC, sixthESC;
 
void setup() {
  pinMode(8, OUTPUT); //питание на крутилку с 8 порта
  digitalWrite(8, HIGH);  //питание на крутилку с 8 порта
  firstESC.attach(2);
  secondESC.attach(3);
  thirdESC.attach(4);  //определение портов всех моторов
  fourthESC.attach(5);
  fifthESC.attach(6);
  sixthESC.attach(7);
  firstESC.writeMicroseconds(2300);
  secondESC.writeMicroseconds(2300);
  thirdESC.write(50);
  fourthESC.write(50);  //настройка моторов(определение их минимальной и максимальной частоты вращения)
  fifthESC.write(50);
  sixthESC.write(50);
  delay(2000);
  firstESC.writeMicroseconds(800);
  secondESC.writeMicroseconds(800);
  thirdESC.write(0);
  fourthESC.write(0);
  fifthESC.write(0);
  sixthESC.write(0);
  delay(6000);



    firstESC.writeMicroseconds(1000);   //чек моторов по одному старт
      delay(1000);
        firstESC.writeMicroseconds(0);
        
    secondESC.writeMicroseconds(1000);
      delay(1000);
        secondESC.writeMicroseconds(0);
        
    thirdESC.write(50);
 delay(1000);
        thirdESC.writeMicroseconds(0);
        
    fourthESC.write(50);
      delay(1000);
        fourthESC.writeMicroseconds(0);
        
    fifthESC.write(50);
      delay(1000);
        fifthESC.writeMicroseconds(0);
        
    sixthESC.write(50);
      delay(1000);
        sixthESC.writeMicroseconds(0); // чек моторов по одному енд
    
    firstESC.writeMicroseconds(1000);
    secondESC.writeMicroseconds(1000);
    thirdESC.write(50);
    fourthESC.write(50); //чек верчения кручения всех моторов
    fifthESC.write(50);
    sixthESC.write(50);
    delay(4000);

    firstESC.writeMicroseconds(0);
    secondESC.writeMicroseconds(0);
    thirdESC.write(0);
    fourthESC.write(0); //остановка всех моторов
    fifthESC.write(0);
    sixthESC.write(0);
    delay(4000);
  
 
}
 
void loop() {
 int value = map(analogRead(0), 0, 1023, 800, 2300); //инициализация крутилки
 int value2 = map(analogRead(0), 0, 1023, 0, 60);

    firstESC.writeMicroseconds(value);
    secondESC.writeMicroseconds(value);
    thirdESC.write(value2);
    fourthESC.write(value2);
    fifthESC.write(value2);  // верчение всех моторов управлением с крутилки
    sixthESC.write(value2);
}
