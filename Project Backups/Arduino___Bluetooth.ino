
int come=5;
int in = 7;
int on= 9;
char c;
void setup() {
  // put your setup code here, to run once:

pinMode(5,OUTPUT);
Serial.begin(9600);

pinMode(7,OUTPUT);
Serial.begin(9600);

pinMode(9,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  c = Serial.read();
  if(c=='1'){

  
  digitalWrite(come,HIGH);

}
  else if(c=='0')
  digitalWrite(come,LOW);

  if(c=='2'){
  digitalWrite(in,HIGH);

  }
    else if(c=='4'){
    digitalWrite(in,LOW);

    }
      if(c=='3')
      digitalWrite(on,HIGH);
      
        else if(c=='6'){
        digitalWrite(on,LOW);
        }

}
