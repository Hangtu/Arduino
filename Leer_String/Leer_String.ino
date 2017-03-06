
#define BUFFSIZ 20 //20 caracteres
char buffer[6];
void setup(){
  
}

void loop(){
  
}

void readString() {
 char c;
 int buffSize = 0;
 
 Serial.flush();
 while (true) {
     c=Serial.read();
     if ((buffSize == BUFFSIZ-1) || (c == 'r')) {             
       buffer[buffSize] = 0;                                   
       return;
     }
     buffer[buffSize++] = c;                                   
 }
}
