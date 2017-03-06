      
      
      
       int led=3;
      
       int brillo;
      
      
        void setup(){
          
          pinMode(3,OUTPUT); 
          
        }
        
        
        void loop(){
          for(brillo=0; brillo<=255;brillo++){
  
          analogWrite(led,brillo);
          delay(10);
          }
          
           for(brillo=255; brillo>=0;brillo--){
  
          analogWrite(led,brillo);
          delay(10);
          }
          
        }
      
