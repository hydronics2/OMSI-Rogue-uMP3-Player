/*
Rogue uMP3 Player for Arduino

Software Serial example using only one pin to transmit (pin 3 is TX).. and Pin 13 as an output in lieu of a RX.

reference: 
http://www.roguerobotics.com/files/ump3/documentation/UMP3-110-A1-102.pdf
and
http://www.asciitable.com/index/asciifull.gif

 */
#include <SoftwareSerial.h>

SoftwareSerial mySerial(13, 3); // RX, TX //only transmitting on TX

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
}

pinMode(13, OUTPUT);
  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
  //mySerial.println("Hello, world?");
}

void loop() { // run over and over


//plays an MP3 file
//plays the following in HEX: PC F /A.mp3 {cr}
//where {cr} is carrage return, ASCII, HEX 0x0D, and " ", space is HEX 0x20

mySerial.write(0x50);
mySerial.write(0x43);
mySerial.write(0x20);
mySerial.write(0x46);
mySerial.write(0x20);
mySerial.write(0x2F);
mySerial.write(0x41);
mySerial.write(0x2E);
mySerial.write(0x6D);
mySerial.write(0x70);
mySerial.write(0x33);
mySerial.write(0x0D);

delay(1500);
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);


}
