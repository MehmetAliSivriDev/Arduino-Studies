// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int light=analogRead(A0);
	Serial.println(light);
}