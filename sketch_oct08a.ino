int tri = 7;
int ech = 6;
int li = 1;
float du,ds;


void setup() {
  pinMode(tri,OUTPUT);
  pinMode(li,OUTPUT);
  pinMode(ech,INPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(tri,LOW);
  delay(2);
  digitalWrite(tri,HIGH);
  delay(10);
  digitalWrite(tri,LOW);

  du = pulseIn(ech,HIGH);
  ds = (du*.0343)/2;
  Serial.println(ds);
  delay(1000);
  if (ds < 3){
    digitalWrite(li,HIGH);
    
    }
  else{
    digitalWrite(li,LOW);
    }
  
  
  // put your main code here, to run repeatedly:

}
