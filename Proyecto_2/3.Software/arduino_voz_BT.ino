
#define l 13
#define a 12
#define v 11
#define n 10


char datosRx;

void setup() {
 pinMode(l,OUTPUT);
 pinMode(a,OUTPUT);
 pinMode(v,OUTPUT);
 pinMode(n,OUTPUT);
 Serial.begin(9600);  
}

void loop() {

  if(Serial.available()>0){
    
    datosRx = Serial.read();

    if(datosRx == 'l'){     
      digitalWrite(l,HIGH); 
      digitalWrite(a,LOW);
      digitalWrite(v,LOW);
      digitalWrite(n,LOW);
    }
    if(datosRx == 'a'){
      digitalWrite(l,LOW);
      digitalWrite(a,HIGH);
      digitalWrite(v,LOW);
      digitalWrite(n,LOW);
    }
    
    if(datosRx == 'v'){
      digitalWrite(l,LOW);
      digitalWrite(a,LOW);
      digitalWrite(v,HIGH);
      digitalWrite(n,LOW);
    }
    if(datosRx == 'n'){
      digitalWrite(l,LOW);
      digitalWrite(a,LOW);
      digitalWrite(v,LOW);
      digitalWrite(n,HIGH);
    
    }

  }
  
}
