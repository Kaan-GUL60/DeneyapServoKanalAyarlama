#include <Deneyap_Servo.h>  //kütüphaneleri import ettik
#include <deneyap.h>


Servo myservo1;
Servo myservo2;  //servolar değişkenlerini tanımladık
Servo myservo3;
Servo myservo4;

void setup() {   
  myservo1.attach(D3);  // ilk servo için kanal tanımlamaya gerek yok.
  myservo2.attach(D5, 1); // burada (D5, 1) ifadesinde D5 pinine bağlı servonun 1. kanala ait olduğunu belirttik.
  myservo3.attach(D6, 2); // 2.kanaldaki servo
  myservo4.attach(D8, 3); // 3.kanaldaki servo
}

void loop() {
    myservo1.write(80);  // 1.servoya dönmesi için açı değeri verdik. (for döngüsü de kullanabilirsiniz)
    delay(500);  //bekleme işlemi
    myservo2.write(100); // 2.servoya dönmesi için açı değeri verdik. (for döngüsü de kullanabilirsiniz)
    delay(500);
    myservo3.write(30);  // 3.servoya dönmesi için açı değeri verdik. (for döngüsü de kullanabilirsiniz)
    delay(500); 
    myservo4.write(50)   // 4.servoya dönmesi için açı değeri verdik. (for döngüsü de kullanabilirsiniz)
}
