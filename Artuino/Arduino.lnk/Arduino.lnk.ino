char innTegn = 0; //lager en variabel som bare kan være en bokstav

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0) {
    innTegn = Serial.read();
    Serial.print(innTegn);
    Serial.print('\t');

    if(isAlpha(innTegn)) {
      Serial.println("En Bokstav");       
    } else {
      Serial.println("Noe annent");
    }
  }
}
