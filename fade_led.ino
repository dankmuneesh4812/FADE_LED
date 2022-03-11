int analogpin = A1; //define analog pin 
int ledpin = 9; //declare the led pin
int adcvalue = 0; //variable to store the adc value from POT
int ledfadevalue = 0; //variable to store the brigthness of led 


void setup() {

  Serial.begin(9600);                     //Initializing the Serial Port to Baud rate 9600
  pinMode(analogpin, INPUT);              //Defining Pot as input 
  pinMode(ledpin, OUTPUT);                //Defining the Led pin as output
  // put your setup code here, to run once:

}

void loop() {

  adcvalue = analogRead(analogpin);                 //Reading the potentiometer value on ADC pin
  Serial.print("ADC VALUE: ");                      //Print the Pot value
  Serial.println(adcvalue);
  ledfadevalue = map(adcvalue, 0, 1023, 0, 255);    //Map the analog value to digital value 
  Serial.print("Brightness Value :");               //Print the mapped value
  Serial.println(ledfadevalue);
  analogWrite(ledpin, ledfadevalue);                //Change the brighness of the LED using the mapped value
  
   

}
