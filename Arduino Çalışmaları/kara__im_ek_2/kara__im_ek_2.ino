int dizi[]={10,11,12,13};

void setup() {

for(int j=0;j<4;j++){
  pinMode (dizi[j],OUTPUT);
}
 
}
 
void loop() {
  // put your main code here, to run repeatedly:
  
  for(int i=0;i<4;i++){
  digitalWrite(dizi[i],HIGH);
  delay(50);
  digitalWrite(dizi[i],LOW);
  delay(50);
  }
 for(int j=3;j>=0;j--){
  digitalWrite(dizi[j],HIGH);
  delay(50);
  digitalWrite(dizi[j],LOW);
  delay(50); 
 }
 

}
