// This is a simple Arduino sketch to display numbers 0 to 9 on a 7-segment display using an Arduino board.

// Pin assignments for the 7-segment display
int pinA = 6;
int pinB = 7;
int pinC = 11;
int pinD = 12;
int pinE = 13;
int pinF = 5;
int pinG = 4;
int pinDP = 10;

void setup()
{
  // Setting the pin modes to OUTPUT
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinDP, OUTPUT);
}

void loop()
{
  // Displaying numbers from 9 to 0 with a 1-second delay between each display
  write9();
  delay(1000);
  
  write8();
  delay(1000);
  
  write7();
  delay(1000);
  
  write6();
  delay(1000);
  
  write5();
  delay(1000);
  
  write4();
  delay(1000);
  
  write3();
  delay(1000);
  
  write2();
  delay(1000);
  
  write1();
  delay(1000);
  
  write0();
  delay(1000);
}

// Function to display number 2
void write2() {
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinDP, LOW);
}

// Function to display number 3
void write3() {
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinDP, LOW);
}

// Function to display number 4
void write4() {
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinDP, LOW);
}

// Function to display number 5
void write5() {
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinDP, LOW);
}

// Function to display number 6
void write6() {
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinDP, LOW);
}

// Function to display number 7
void write7() {
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinDP, LOW);
}

// Function to display number 8
void write8() {
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinDP, LOW);
}

// Function to display number 9
void write9() {
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinDP, LOW);
}

// Function to display number 1
void write1() {
  	digitalWrite(pinA, LOW);
	digitalWrite(pinB, HIGH);
  	digitalWrite(pinC, HIGH);
  	digitalWrite(pinD, LOW);
  	digitalWrite(pinE, LOW);
  	digitalWrite(pinF, LOW);
  	digitalWrite(pinG, LOW);
  	digitalWrite(pinDP, LOW);
}

// Function to display number 0
void write0() {
  	digitalWrite(pinA, HIGH);
	digitalWrite(pinB, HIGH);
  	digitalWrite(pinC, HIGH);
  	digitalWrite(pinD, HIGH);
  	digitalWrite(pinE, HIGH);
  	digitalWrite(pinF, HIGH);
  	digitalWrite(pinG, LOW);
  	digitalWrite(pinDP, LOW);
}
