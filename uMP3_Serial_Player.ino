/*
Rogue uMP3 Player for Arduino

reference: 
http://www.roguerobotics.com/files/ump3/documentation/UMP3-110-A1-102.pdf
and
http://www.asciitable.com/index/asciifull.gif
 */


void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);

}

void loop()
{
//sets the volume to 50 on a scale of 0-255 (0 is loudest)
//plays the following in HEX: ST V50 {cr}
//where {cr} is carrage return, ASCII, HEX 0x0D, and " ", space is HEX 0x20
Serial.write(0x53);
Serial.write(0x54);
Serial.write(0x20);
Serial.write(0x56);
Serial.write(0x35);
Serial.write(0x20);
Serial.write(0x0D);

  
delay(1500);

//plays an MP3 file
//plays the following in HEX: PC F /A.mp3 {cr}
//where {cr} is carrage return, ASCII, HEX 0x0D, and " ", space is HEX 0x20
Serial.write(0x50);
Serial.write(0x43);
Serial.write(0x20);
Serial.write(0x46);
Serial.write(0x20);
Serial.write(0x2F);
Serial.write(0x41);
Serial.write(0x2E);
Serial.write(0x6D);
Serial.write(0x70);
Serial.write(0x33);
Serial.write(0x0D);

delay(1500);

//plays an MP3 file
//plays the following in HEX: PC F /B.mp3 {cr}
//where {cr} is carrage return, ASCII, HEX 0x0D, and " ", space is HEX 0x20
Serial.write(0x50);
Serial.write(0x43);
Serial.write(0x20);
Serial.write(0x46);
Serial.write(0x20);
Serial.write(0x2F);
Serial.write(0x42);
Serial.write(0x2E);
Serial.write(0x6D);
Serial.write(0x70);
Serial.write(0x33);
Serial.write(0x0D);

delay(1500);

}




