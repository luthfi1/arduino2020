#include <SoftwareSerial.h> 
SoftwareSerial module_bluetooth(0, 1); // pin RX | TX
 
char data = 0;             
void setup() 
{
  Serial.begin(9600);         
  pinMode(2, OUTPUT);  //inisialisasi PIN 2 Menjadi Output
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(2, HIGH); // pada kondisi awal dibuat high supaya relay mati (karena modul relay aktif low)
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  
}
void loop()
{
  if(Serial.available() > 0)  
  {
    data = Serial.read(); //baca data yang dikirim      
    if(data == '1'){
    digitalWrite(2, LOW); //nyalakan relay
    }
    else if(data == '2'){      
    digitalWrite(2, HIGH); //matikan relay
    } 
    else if(data == '3'){
    digitalWrite(3, LOW); 
    }
    else if(data == '4'){      
    digitalWrite(3, HIGH); 
    } 
    else if(data == '5'){
    digitalWrite(4, LOW); 
    }
    else if(data == '6'){      
    digitalWrite(4, HIGH); 
    } 
    else if(data == '7'){
    digitalWrite(5, LOW); 
    }
    else if(data == '8'){      
    digitalWrite(5, HIGH); 
    } 
   
                              
}}
