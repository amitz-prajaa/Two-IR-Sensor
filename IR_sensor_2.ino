int ir1 = 13 ;
int ir2 = 12 ;
int led = 7 ;
int count = 0 ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ir1, INPUT);
  pinMode(ir2 , INPUT);
  pinMode(led , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    int s1 = digitalRead(ir1 );
    int s2 = digitalRead(ir2);
    if(s1==0 && s2==0 ){
        count++
        Serial.println("Person Entered -> count = ");
        //  digitalWrite(led , 1);
        Serial.println(count);
      
      delay(1000);
      }
      else{
        Serial.println("No one Entered -> count = ");
        // digitalWrite(led , 1);
        Serial.println(count);
      delay(1000);
      }
       
}
