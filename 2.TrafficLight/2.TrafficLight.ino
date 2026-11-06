int red = 8; 
int green =9;
int yellow = 10;
void setup() { 
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(yellow,OUTPUT);
} 
void loop() { 
digitalWrite(red, HIGH); 
delay(2000); 
digitalWrite(red, LOW); 

digitalWrite(green, HIGH); 
delay(2000); 
digitalWrite(green, LOW); 

digitalWrite(yellow, HIGH); 
delay(2000); 
digitalWrite(yellow, LOW); 
 

 
}