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
  thirdESC.writeMicroseconds(2300);
  fourthESC.writeMicroseconds(2300);  //настройка моторов(определение их минимальной и максимальной частоты вращения)
  fifthESC.writeMicroseconds(2300);
  sixthESC.writeMicroseconds(2300);
  delay(2000);
  firstESC.writeMicroseconds(800);
  secondESC.writeMicroseconds(800);
  thirdESC.writeMicroseconds(800);
  fourthESC.writeMicroseconds(800);
  fifthESC.writeMicroseconds(800);
  sixthESC.writeMicroseconds(800);
  delay(6000);



    firstESC.writeMicroseconds(1000);   //чек моторов по одному старт
      delay(1000);
        firstESC.writeMicroseconds(0);
        
    secondESC.writeMicroseconds(1000);
      delay(1000);
        secondESC.writeMicroseconds(0);
        
    thirdESC.writeMicroseconds(1000);
 delay(1000);
        thirdESC.writeMicroseconds(0);
        
    fourthESC.writeMicroseconds(1000);
      delay(1000);
        fourthESC.writeMicroseconds(0);
        
    fifthESC.writeMicroseconds(1000);
      delay(1000);
        fifthESC.writeMicroseconds(0);
        
    sixthESC.writeMicroseconds(1000);
      delay(1000);
        sixthESC.writeMicroseconds(0); // чек моторов по одному енд
    
    firstESC.writeMicroseconds(1000);
    secondESC.writeMicroseconds(1000);
    thirdESC.writeMicroseconds(1000);
    fourthESC.writeMicroseconds(1000); //чек верчения кручения всех моторов
    fifthESC.writeMicroseconds(1000);
    sixthESC.writeMicroseconds(1000);
    delay(4000);

    firstESC.writeMicroseconds(0);
    secondESC.writeMicroseconds(0);
    thirdESC.writeMicroseconds(0);
    fourthESC.writeMicroseconds(0); //остановка всех моторов
    fifthESC.writeMicroseconds(0);
    sixthESC.writeMicroseconds(0);
    delay(4000);
  
 
}
 
void loop() {
 int value = map(analogRead(0), 0, 1023, 800, 2300); //инициализация крутилки

    firstESC.writeMicroseconds(value);
    secondESC.writeMicroseconds(value);
    thirdESC.writeMicroseconds(value);
    fourthESC.writeMicroseconds(value);
    fifthESC.writeMicroseconds(value);  // верчение всех моторов управлением с крутилки
    sixthESC.writeMicroseconds(value);
}
