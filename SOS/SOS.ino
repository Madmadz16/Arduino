int pinDiode = 12;
int hastighet = 50;
int dotLen = 4 * hastighet;
int lineLen = 12 * hastighet;

int symLen = hastighet* 4;
int letterLen = hastighet * 12;
int wordLen = hastighet * 36;

void setup() {
  pinMode(pinDiode, OUTPUT);
}

void writeDot(int len) {
  digitalWrite(pinDiode, HIGH);
  delay(dotLen);
  digitalWrite(pinDiode, LOW);
  delay(len);
}

void writeLine(int len) {
  digitalWrite(pinDiode, HIGH);
  delay(lineLen);
  digitalWrite(pinDiode, LOW);
  delay(len);

}

void loop() {
  char inntegn = ' ';
  if(Serial.available() > 0) {
    inntegn = Serial.read();
  }
  if(isAlpha(inntegn)) {
    inntegn = tolower(inntegn);
    
    if(isWhitespace(Serial.peek())) {
      writeLetter(inntegn, true);
    } else {
      writeLetter(inntegn, false);
    }
  
  } else {
    
    writeLetter('m', true);
    writeLetter('a', true);
    writeLetter('r', true);
    writeLetter('t', true);
    writeLetter('i', true);
    writeLetter('n', true);    
  }
}

void writeLetter(char letter, boolean erOrd) {
  int len = 0;
  if(erOrd == true) {
    len = wordLen;
  } else {
    len = letterLen;
  }
  
  if(letter == tolower('a')) {
    writeDot(symLen);
    writeLine(len);
  
  } else if(letter == tolower('b')) {
    writeLine(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeDot(len);
      
  } else if(letter == tolower('c')) {
    writeLine(symLen);
    writeDot(symLen);
    writeLine(symLen);
    writeDot(len);
  
  } else if(letter == tolower('d')) {
    writeLine(symLen);
    writeDot(symLen);
    writeDot(len);
  
  } else if(letter == tolower('e')) {
    writeDot(len);
  
  } else if(letter == tolower('f')) {
    writeDot(symLen);
    writeDot(symLen);
    writeLine(symLen);
    writeDot(len);
  
  } else if(letter == tolower('g')) {
    writeLine(symLen);
    writeLine(symLen);
    writeDot(len);
  
  } else if(letter == tolower('h')) {
    writeDot(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeDot(len);
  
  } else if(letter == tolower('i')) {
    writeDot(symLen);
    writeDot(len);
  
  } else if(letter == tolower('j')) {
    writeDot(symLen);
    writeLine(symLen);
    writeLine(symLen);
    writeLine(len);
  
  } else if(letter == tolower('k')) {
    writeLine(symLen);
    writeDot(symLen);
    writeLine(len);
  
  } else if(letter == tolower('l')) {
    writeDot(symLen);
    writeLine(symLen);
    writeDot(symLen);
    writeDot(len);
  
  } else if(letter == tolower('m')) {
    writeLine(symLen);
    writeLine(len);
  
  } else if(letter == tolower('n')) {
    writeLine(symLen);
    writeDot(len);
  
  } else if(letter == tolower('o')) {
    writeLine(symLen);
    writeLine(symLen);
    writeLine(len);
  
  } else if(letter == tolower('p')) {
    writeDot(symLen);
    writeLine(symLen);
    writeLine(symLen);
    writeDot(len);
  
  } else if(letter == tolower('q')) {
    writeLine(symLen);
    writeLine(symLen);
    writeDot(symLen);
    writeLine(len);
  
  } else if(letter == tolower('r')) {
    writeDot(symLen);
    writeLine(symLen);
    writeDot(len);
  
  } else if(letter == tolower('s')) {
    writeDot(symLen);
    writeDot(symLen);
    writeDot(len);
  
  } else if(letter == tolower('t')) {
    writeLine(len);
  
  } else if(letter == tolower('u')) {
    writeDot(symLen);
    writeDot(symLen);
    writeLine(len);
  
  } else if(letter == tolower('v')) {
    writeDot(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeLine(len);
  
  } else if(letter == tolower('w')) {
    writeDot(symLen);
    writeLine(symLen);
    writeLine(len);
  
  } else if(letter == tolower('x')) {
    writeLine(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeLine(len);
  
  } else if(letter == tolower('y')) {
    writeLine(symLen);
    writeDot(symLen);
    writeLine(symLen);
    writeLine(len);
  
  } else if(letter == tolower('z')) {
    writeLine(symLen);
    writeLine(symLen);
    writeDot(symLen);
    writeDot(len);
  
  } else if(letter == '0') {
    writeLine(symLen);
    writeLine(symLen);
    writeLine(symLen);
    writeLine(symLen);
    writeLine(len);
  
  } else if(letter == '1') {
    writeDot(symLen);
    writeDot(symLen);
    writeLine(symLen);
    writeLine(symLen);
    writeLine(len);
  
  } else if(letter == '2') {
    writeDot(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeLine(symLen);
    writeLine(len);
  
  } else if(letter == '3') {
    writeDot(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeLine(symLen);
    writeLine(len);
  
  } else if(letter == '4') {
    writeDot(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeLine(len);
  
  } else if(letter == '5') {
    writeDot(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeDot(len);
  
  } else if(letter == '6') {
    writeLine(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeDot(len);
  
  } else if(letter == '7') {
    writeLine(symLen);
    writeLine(symLen);
    writeDot(symLen);
    writeDot(symLen);
    writeDot(len);
  
  } else if(letter == '8') {
    writeLine(symLen);
    writeLine(symLen);
    writeLine(symLen);
    writeDot(symLen);
    writeDot(len);
  
  } else if(letter == '9') {
    writeLine(symLen);
    writeLine(symLen);
    writeLine(symLen);
    writeLine(symLen);
    writeDot(len);
  
  }
  
  Serial.println(letter);
}
