int sesseviyesi;
int se1 = 380;
int se2 = 385;
int se3 = 390;
int se4 = 395;
int se5 = 400;
int se6 = 405;
int se7 = 410;
int se8 = 415;
int se9 = 420;
void setup() {
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
}

void loop() {
sesseviyesi=analogRead(A0);
Serial.println(sesseviyesi);  
 if(sesseviyesi>se1){
  digitalWrite(4,HIGH);
 }else {
  digitalWrite(4,LOW);
 }
 if(sesseviyesi>se2){
  digitalWrite(5,HIGH);
 }else {
  digitalWrite(5,LOW);
 }
  if(sesseviyesi>se3){
  digitalWrite(6,HIGH);
 }else {
  digitalWrite(6,LOW);
 }
  if(sesseviyesi>se4){
  digitalWrite(7,HIGH);
 }else {
  digitalWrite(7,LOW);
 }
  if(sesseviyesi>se5){
  digitalWrite(8,HIGH);
 }else {
  digitalWrite(8,LOW);
 }
  if(sesseviyesi>se6){
  digitalWrite(9,HIGH);
 }else {
  digitalWrite(9,LOW);
 }
  if(sesseviyesi>se7){
  digitalWrite(10,HIGH);
 }else {
  digitalWrite(10,LOW);
 }
  if(sesseviyesi>se8){
  digitalWrite(11,HIGH);
 }else {
  digitalWrite(11,LOW);
 }
  if(sesseviyesi>se9){
  digitalWrite(12,HIGH);
 }else {
  digitalWrite(12,LOW);
 }
}
