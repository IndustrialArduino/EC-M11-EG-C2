// EC-M11-EG-C1
/*
 * Digital Input Test
 * RS-485 Serial print
 * 12V Booster Enable / Disable
 * 
 */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial1.begin(9600);

  Serial.println("The device is powered up");

  pinMode(35, INPUT); // Digital Input 1
  pinMode(34, INPUT); // Digital Input 2

  pinMode(21, INPUT); // ADS1115 Interrupt

  pinMode(13, OUTPUT); // RS-485 flow control

  digitalWrite(13, HIGH);

  Serial.println("Initialized digital inputs");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("I1: ");
  Serial.println(digitalRead(35));
  Serial.print("I2: ");
  Serial.println(digitalRead(34));
  delay(800);
  Serial1.println("RS-485 TX TEST");
}
