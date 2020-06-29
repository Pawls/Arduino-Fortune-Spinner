/*this file is needed to generate the music when the fortune wheel is spinning. Included is a header
 * file called pitches which imports every possible note that can be generated electronically. 
 */
void fortune1(int buzz_pin)
{
  //Note melody and duration of fortune1
  int melody[] = {NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4, 0, NOTE_A4, 0, NOTE_E4};
  int noteDurations[] = { 4,4,4,4,4,4,4,4};
  
  //Loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzz_pin, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(buzz_pin);    
  }   
  
}

void fortune2(int buzz_pin)
{
  //Note melody and duration of fortune3
  int melody[] = {NOTE_A4, NOTE_C4, NOTE_F4, NOTE_C4, NOTE_A4, NOTE_C4, NOTE_F4, NOTE_G4};
  int noteDurations[] = { 4,4,4,4,4,4,4,4};
  
  //loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzz_pin, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(buzz_pin);    
  }   
}

void fortune3(int buzz_pin)
{
  //Note melody and duration of fortune7
  int melody[] = {NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_GS5, NOTE_AS4, NOTE_G5, NOTE_G5, NOTE_AS5, NOTE_DS4, NOTE_F6, NOTE_GS4, NOTE_AS5};
  int noteDurations[] = { 8,8,8,8,8,8,8,8,8,8,8,8};

  //loop the melody
  for (int thisNote = 0; thisNote < 12; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzz_pin, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(buzz_pin);    
  }   
 
}



void fortune4(int buzz_pin)
{
  //Note melody and duration of fortune2 
  int melody[] = {NOTE_E4, NOTE_B4, NOTE_DS5, NOTE_E4, NOTE_B4, NOTE_DS5, NOTE_E4, NOTE_B4};
  int noteDurations[] = { 8,8,8,8,8,8,8,8};

  //loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzz_pin, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(buzz_pin);    
  }   
}

void fortune5(int buzz_pin)
{
    //Note melody and duration of fortune8
    int melody[] = {NOTE_C4, NOTE_DS4, NOTE_E3, NOTE_AS2, 0, NOTE_A4, 0, NOTE_E4};
    int noteDurations[] = { 12,12,12,12,12,12,12,12};

    //loop the melody
    for (int thisNote = 0; thisNote < 8; thisNote++)
    {
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(buzz_pin, melody[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      noTone(buzz_pin);    
    }   
}


void fortune6(int buzz_pin)
{
  //Note melody and duration of fortune4
  int melody[] = {NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
  int noteDurations[] = { 16,16,16,16,16,16,16,16};

  //loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzz_pin, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(buzz_pin);    
  }   
 
}

void fortune7(int buzz_pin)
{
  //Note melody and duration of fortune5
  int melody[] = {NOTE_B4, NOTE_A4, NOTE_D5, NOTE_E5, NOTE_A4, NOTE_CS4, NOTE_B4, NOTE_B4};
  int noteDurations[] = { 8,8,8,8,8,8,8,8};

  //loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzz_pin, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(buzz_pin);    
  }   
  
}

void fortune8(int buzz_pin)
{
  //Note melody and duration of fortune6
  int melody[] = {NOTE_CS5, NOTE_DS5, NOTE_F5, NOTE_FS5, NOTE_GS5, NOTE_FS5, NOTE_F5, NOTE_DS5};
  int noteDurations[] = { 16,16,16,16,16,16,16,16};

  //loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzz_pin, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(buzz_pin);    
  }   
  
}
