/*
okay so welcome to my github repository sorry if this is long
TL;DR is basically just wire ur stuff like the image in the readme (the second one)

i made a function this can be used as an entire code have fun enjoy heres some lorem ipsum
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum vulputate turpis sit amet ante sodales, ac accumsan ante maximus. Phasellus iaculis ante sit amet erat semper sodales. Cras scelerisque urna justo, porta egestas nisi finibus sit amet. Vestibulum lacinia ac ante vel semper. Duis pellentesque nibh a elit venenatis venenatis. Proin ac hendrerit nisi, et suscipit enim. Morbi consectetur diam tellus, in iaculis nulla eleifend sit amet.
Quisque id faucibus nibh. Fusce sed tincidunt turpis. Nulla aliquam, lectus suscipit varius varius, nunc enim volutpat sem, eu feugiat urna elit non mi. Vivamus in erat mollis, pulvinar enim sed, consequat neque. Cras et sagittis magna. Sed posuere dui et facilisis tincidunt. In consectetur sem dui, ac imperdiet lectus aliquam et.
Phasellus sagittis vitae ligula ut tristique. Curabitur accumsan finibus volutpat. Donec molestie ligula vel elit laoreet aliquam. Curabitur convallis erat in sapien blandit, ullamcorper varius tellus interdum. Nulla malesuada vitae ipsum ut cursus. Nullam luctus est quis massa sodales sollicitudin. Sed pulvinar neque semper diam aliquam dapibus. Nullam quis molestie arcu. Praesent accumsan fringilla libero quis tristique. Morbi efficitur sem neque, in ultrices lacus mattis lacinia. Quisque quis neque tortor. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Cras laoreet erat ac mauris mattis pretium. Suspendisse eu enim laoreet, mollis tortor ac, commodo est. Cras id odio odio.
Vestibulum arcu ante, sodales at consectetur in, mollis nec nunc. Nulla iaculis metus metus, sodales pharetra urna facilisis fermentum. Pellentesque eleifend orci sed erat tempus suscipit eu vel tortor. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Morbi tincidunt accumsan maximus. Suspendisse nec ante sed felis imperdiet congue. Aenean aliquet lacinia iaculis. Nulla at eros eget ante pretium vehicula eu ac dui. Etiam ut felis sed arcu iaculis dictum. Nam eu rutrum arcu, ac pulvinar diam. Etiam eget elementum elit. Donec lacinia mi vel arcu convallis, bibendum porta sapien gravida. Cras vestibulum elit vel commodo tempus. Fusce varius condimentum tortor, ac ornare mauris molestie non. 
*/
int ldr = A5;

int enA = 10;
int motor1Forward = 9;
int motor1Backward = 8;

int enB = 11;
int motor2Forward = 12;
int motor2Backward = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(ldr, INPUT);
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
  pinMode(motor1Forward, OUTPUT);
  pinMode(motor1Backward, OUTPUT);
  pinMode(motor2Forward, OUTPUT);
  pinMode(motor2Backward, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  enAB(255, 255); // speed
  singleMotor(2, 5000); // make right motor spin :)


}

// enA and enB Functions
void enAB(int ena, int enb) {
  analogWrite(enA, ena);
  analogWrite(enB, enb);
}

void singleMotor(int side, int slep) {
  if (side == 1) { // left
    digitalWrite(motor1Forward, HIGH);
    digitalWrite(motor1Backward, LOW);
    delay(slep);
    digitalWrite(motor1Forward, LOW);
    digitalWrite(motor1Backward, LOW);
  } else if (side == 2) { // right
    digitalWrite(motor2Forward, HIGH);
    digitalWrite(motor2Backward, LOW);
    delay(slep);
    digitalWrite(motor2Forward, LOW);
    digitalWrite(motor2Backward, LOW);
  }
}

// Motor Functions
void Forward(int duration){
     digitalWrite(motor1Forward, HIGH);
    digitalWrite(motor1Backward, LOW);
    digitalWrite(motor2Forward, HIGH);
    digitalWrite(motor2Backward, LOW);
    delay(duration);
     digitalWrite(motor1Forward, LOW);
    digitalWrite(motor1Backward, LOW);
    digitalWrite(motor2Forward, LOW);
    digitalWrite(motor2Backward, LOW);
  }
  void Back(int dur){
         digitalWrite(motor1Forward, LOW);
    digitalWrite(motor1Backward, HIGH);
    digitalWrite(motor2Forward, LOW);
    digitalWrite(motor2Backward, HIGH);
    delay(dur);
    digitalWrite(motor1Forward, LOW);
    digitalWrite(motor1Backward, LOW);
    digitalWrite(motor2Forward, LOW);
    digitalWrite(motor2Backward, LOW);
 
  }
 void stop(){
    digitalWrite(motor1Forward, LOW);
    digitalWrite(motor1Backward, LOW);
    digitalWrite(motor2Forward, LOW);
    digitalWrite(motor2Backward, LOW); 
 }

