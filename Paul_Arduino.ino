// Maria Martinez
// BMES Design Team
// Code for Paul Arduino
// Version:1, Revision: 1.0
// 07 Jan. 2019

int pumpRelay1 = 7;          // pump relays are connected to digital pins 
int pumpRelay2 = 8;
int pumpRelay3 = 9;
int pumpRelay4 = 10;
int valveRelay1 = 11;        // valve relays are connected to digital pins
int valveRelay2 = 12;
int valveRelay3 = 13;
int valveRelay4 = 14;

int Req1;               // input from Rebecca 
int Req2;
int Req3;
int Req4;


// 
void setup() {
  Serial.begin(9600);                    // initiates serial communication
  pinMode (pumpRelay1, OUTPUT);          // relays are set as an output
  pinMode (pumpRelay2, OUTPUT);
  pinMode (pumpRelay3, OUTPUT);
  pinMode (pumpRelay4, OUTPUT);
  pinMode (valveRelay1, OUTPUT);
  pinMode (valveRelay2, OUTPUT);
  pinMode (valveRelay3, OUTPUT);
  pinMode (valveRelay4, OUTPUT);
}

void loop() {
  // input from Rebecca           // 0 means that condition is met; do nothing 
  // Req1 = (0/1);                // 1 means that condition is not met; pump starts 
  // Req2 = (0/1);
  // Req3 = (0/1);
  // Req4 = (0/1);

/////////////// REQUIREMENT 1 
  if (Req1 = 0) {                       // requirement 1 is met
    digitalWrite(valveRelay1, HIGH);     // valve 1 is closed
    digitalWrite(pumpRelay1, HIGH);      // pump 1 is off
  } 

  if (Req1 = 1) {                       // requirement 1 is not met
    digitalWrite(valveRelay1, LOW);      // valve 1 is open 
    digitalWrite(pumpRelay1, LOW);       // pump 1 is on 
  }

 /////////////// REQUIREMENT 2
  if (Req2 = 0) {                       // requirement 2 is met
    digitalWrite(valveRelay2, HIGH);     // valve 2 is closed
    digitalWrite(pumpRelay2, HIGH);      // pump 2 is off
  } 

  if (Req2 = 1) {                       // requirement 2 is not met
    digitalWrite(valveRelay2, LOW);      // valve 2 is open 
    digitalWrite(pumpRelay2, LOW);       // pump 2 is on 
  }
  
 /////////////// REQUIREMENT 3
  if (Req3 = 0) {                       // requirement 3 is met
    digitalWrite(valveRelay3, HIGH);     // valve 3 is closed
    digitalWrite(pumpRelay3, HIGH);      // pump 3 is off
  } 

  if (Req3 = 1) {                       // requirement 3 is not met
    digitalWrite(valveRelay3, LOW);      // valve 3 is open 
    digitalWrite(pumpRelay3, LOW);       // pump 3 is on 
  }
  
 /////////////// REQUIREMENT 4
  if (Req4 = 0) {                       // requirement 4 is met
    digitalWrite(valveRelay4, HIGH);     // valve 4 is closed
    digitalWrite(pumpRelay4, HIGH);      // pump 4 is off
  } 

  if (Req4 = 1) {                       // requirement 4 is not met
    digitalWrite(valveRelay4, LOW);      // valve 4 is open 
    digitalWrite(pumpRelay4, LOW);       // pump 4 is on 
  }

  delay (500);      // time delay between each loop

}



  
  

}
