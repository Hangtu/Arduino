char input;
int led1=0;
int led2=1;

void setup(){
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
}



void loop(){
   while(Serial.available()>0){
   input=Serial.read();

    if(input=='0'){
       digitalWrite(led1,LOW);
 
    }
    if(input=='1'){
      digitalWrite(led1,HIGH);
    }
    
    if(input=='2'){
       digitalWrite(led2,LOW);
    }
    
    if(input=='3'){
      digitalWrite(led2,HIGH);
    }
    
    if(input=='4'){
      parpadea();
    }
    
    if(input=='5'){
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
    }
    
    if(input=='6'){
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
    }
    
    if(input=='7'){
      culo();
    }
  }
}  



void parpadea(){
   int leds[]={led1,led2};
   
  for(int j=0;j<=10;j++){
   for (int i=0;i<=1;i++){
     digitalWrite(leds[i],HIGH);
   } 
     delay(100);
     for (int i=0;i<=1;i++){
     digitalWrite(leds[i],LOW);
   } 
     delay(100);
  } 
}


void culo(){
   int leds[]={led1,led2};
   
  for(int j=0;j<=10;j++){
   for (int i=0;i<=1;i++){
     digitalWrite(leds[i],HIGH);
   } 
     delay(50);
     for (int i=0;i<=1;i++){
     digitalWrite(leds[i],LOW);
   } 
     delay(50);
  } 
}
