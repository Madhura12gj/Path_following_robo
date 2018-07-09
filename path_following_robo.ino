int ls=2;
int rs=3;


void setup() {
  // put your setup code here, to run once:
pinMode(ls,INPUT);  //assigning pin no to the left sensor
pinMode(rs,INPUT);  //assigning pin no to the rigth sensor
pinMode(10,OUTPUT); //assigning 4 pin no to the motors
pinMode(11,OUTPUT); //Since each motor has two wires
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(8,OUTPUT);//assigning pin no 8 as output
pinMode(9,OUTPUT);
digitalWrite(8,HIGH); //making pin no 8 as Vcc since we need two more 5V
digitalWrite(9,HIGH);

}

void loop() 
{
  // put your main code here, to run repeatedly:
int i=digitalRead(ls);
int j=digitalRead(rs);

if((i==HIGH)&&(j==HIGH)) //both the sensors are sensing ROBO MOVES FORWARD
{
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
}

if((i==LOW)&&(j==HIGH)) // only one sensor is active,robo moves in the direction of j sensor
{
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
}

if((i==HIGH)&&(j==LOW)) //only one sensore is active,robo moves in the direction of i sensor
{
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
}

if((i==LOW)&&(j==LOW)) //both the sensores are inactive,hence robo doesn't move
{
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
}

}


