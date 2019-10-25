const int vermelho = 9;
const int verde = 10;
const int azul = 11;
const int button = 7;

int luzBaixa = 2;
int luzMedia = 4;
int luzAlta = 3;
int ldr = A0;
int val_ldr;
boolean buttonState = LOW;
boolean i = LOW;

String cor;

void setup() {

Serial.begin(9600);

pinMode(ldr,INPUT);
pinMode(button, INPUT);
pinMode(luzBaixa,OUTPUT);
pinMode(luzMedia,OUTPUT);
pinMode(luzAlta,OUTPUT);
pinMode(vermelho,OUTPUT);
pinMode(verde,OUTPUT);
pinMode(azul,OUTPUT);

}

void loop() {
buttonState = digitalRead(button);
if(buttonState == HIGH){
  i = !i;
  delay(500);
  }
val_ldr = analogRead(ldr);

if(i == LOW){
if(val_ldr<=400){
  digitalWrite(luzBaixa,HIGH);
  digitalWrite(luzMedia,LOW);
  digitalWrite(luzAlta,LOW);
  }

 else if(val_ldr<=700){
  digitalWrite(luzMedia,HIGH);
  digitalWrite(luzAlta,LOW);
  digitalWrite(luzBaixa,LOW);
  }

  else{
    digitalWrite(luzAlta,HIGH);
    digitalWrite(luzBaixa,LOW);
    digitalWrite(luzMedia,LOW);
    
    }
    }
if(i == HIGH){
  digitalWrite(luzBaixa,LOW);
  digitalWrite(luzMedia,LOW);
  digitalWrite(luzAlta,LOW);
for(int y=0;y<6;y++){
buttonState = digitalRead(button);
if(buttonState == HIGH){
  i = !i;
  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
  break;
  delay(500);
  }
if (y == 0){
  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, HIGH);
  }
  if (y == 1){
  digitalWrite(azul, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
  }
  if (y == 2){
  digitalWrite(azul, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
  }
  if (y == 3){
  analogWrite(azul, 0);
  analogWrite(verde, 15);
  analogWrite(vermelho, 255);
  }
  if (y == 4){
  analogWrite(azul, 75);
  analogWrite(verde, 0);
  analogWrite(vermelho, 255);
  }
  if (y == 5){
  digitalWrite(azul, HIGH);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, HIGH);
  }
  delay(200);
  buttonState = digitalRead(button);
if(buttonState == HIGH){
  i = !i;
  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
  break;
  delay(500);}
  delay(200);
  if(buttonState == HIGH){
  i = !i;
  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
  break;
  delay(500);}
  delay(200);
  if(buttonState == HIGH){
  i = !i;
  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
  break;
  delay(500);}
  delay(200);
  if(buttonState == HIGH){
  i = !i;
  digitalWrite(azul, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
  break;
  delay(500);}
  delay(200);
  if(i == LOW){
    y=6;
    }
}
}
}
