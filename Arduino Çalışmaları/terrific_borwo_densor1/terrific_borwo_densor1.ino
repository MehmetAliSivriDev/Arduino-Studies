// C++ code
//

//Bu bif ledli trafik lambası kodudur."dur" yazdığınızda kırmızı,"hazirlan"yazdığınızda sari,"gec"yazdığınızda yeşil led yanacaktır. 
#include <string.h>

void setup(){
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0){
    
    String durum=Serial.readString();
    durum.trim();
    if(durum=="dur"){
   
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(13,HIGH);
      delay(3000);
    
    } else if(durum=="hazirlan"){
   
      digitalWrite(11,LOW);
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      delay(3000);
    
    } else if(durum=="gec"){
   
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      digitalWrite(11,HIGH);
      delay(3000);
    }
   }
  }
    
