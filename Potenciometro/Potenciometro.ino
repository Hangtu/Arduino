      
      
      
       int led=3;
       int potenciometro=0;
       int brillo;
      
      
        void setup(){
          
          pinMode(3,OUTPUT); 
          //Los pins analogicos son entradas automaticamente.
        }
        
        
        void loop(){
            
           brillo= analogRead(potenciometro) / 4; //0 a 1023
           
           analogWrite(led,brillo);
          
        }
      
