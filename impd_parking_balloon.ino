

int mot1=6;
int mot2=3;
int ir=12;
int a=1,b=2;

void setup() {
 

  pinMode(mot1,OUTPUT);
  pinMode(mot2,OUTPUT);
  pinMode(ir,INPUT);

}

void loop() {
 
 s=digitalRead(ir);
 if(s==1&&(a==1&&b==2))
 {
  
  //rotates in clockwise direction for winding the string
   a=10;
   b=20;
   analogWrite(mot1,255);
   analogWrite(mot2,0);
   delay(10000);//delay for 10 secs
 
 }
 else
 {
  analogWrite(mot1,0);
  analogWrite(mot2,255);
  delay(5000);//delay for 5 secs to rech max/2 height
  a=1;
  b=2;
 }
}
