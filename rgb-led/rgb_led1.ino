int redPin = 6;
int greenPin = 3;
int bluePin = 5;

String setColor;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  Serial.begin(9600);
  
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
}

void loop()
{
  setColor = Serial.readString();
  
  if (setColor == "red") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  } else if (setColor == "green") {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
  } else if (setColor == "blue") {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
  } else if (setColor == "yellow") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
  } else if (setColor == "cyan") {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 255);
  } else if (setColor == "magenta") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
  } else if (setColor == "white") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 255);
  } else if (setColor == "orange") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 165);
    analogWrite(bluePin, 0);
  } else if (setColor == "purple") {
    analogWrite(redPin, 128);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 128);
  } else if (setColor == "pink") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 192);
    analogWrite(bluePin, 203);
  }
}
