// C++ code
//
//RGB Gece Lambası Kodları
void setup()
{
  pinMode(13, OUTPUT);//kırmızı
  pinMode(12, OUTPUT);//mavi
  pinMode(11, OUTPUT);//yeşil
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
    int isik=analogRead(A0)/4;
    Serial.println(isik);
    //Eğer isik degerimiz 100'ün üstündeyse rgbmiz yanıyor.
 if (isik>100){

  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  delay(100);
  //Eğer isik degerimiz 100'ün altındaysa rgbmiz sönüyor.
 }if (isik<100){
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
 }
//NOT:Kullandığım fotosensör büyük değer ile okumaya başladığı için bu şekilde tersine bir işlem yapılmıştır.

}
