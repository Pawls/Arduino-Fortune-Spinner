/*this file is needed to generate the music when the fortune wheel is spinning. Included is a header
 * file called pitches which imports every possible note that can be generated electronically. 
 */




#include "pitches.h"
void setup() 
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
}

void loop() 
{
  demo(); 
}





//Start the music as the fortune is randomly generated
void start_music()
{

  //Note melody along with duration
  int melody[] = { NOTE_E4, NOTE_B4, NOTE_DS5, NOTE_E4, NOTE_B4, NOTE_DS5, NOTE_E4, NOTE_B4};
  int noteDurations[] = { 12,12,12,12,12,12,12,12};
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];

    //if the note is equal to E4, light one of the LEDs
    if(melody[thisNote] == NOTE_E4)
    {
      tone(8, melody[thisNote], noteDuration);
      digitalWrite(5,HIGH);


      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;

      delay(pauseBetweenNotes);
      // stop the tone playing:
      digitalWrite(5,LOW);
      noTone(8);
      
    }
    //if the note is equal to B4, light one of the LEDs
    else if (melody[thisNote] == NOTE_B4)
    {
      tone(8, melody[thisNote], noteDuration);
      digitalWrite(6,HIGH);


      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;

      delay(pauseBetweenNotes);
      // stop the tone playing:
      digitalWrite(6,LOW);
      noTone(8);
      
    }
    //if the note is equal to DS4, light one of the LEDs
    else if (melody[thisNote] == NOTE_DS5)
    {
      tone(8, melody[thisNote], noteDuration);
      digitalWrite(7,HIGH);


      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;

      delay(pauseBetweenNotes);
      // stop the tone playing:
      digitalWrite(7,LOW);
      noTone(8);
    }
    
  }
  
}

void fortune1()
{
  //Note melody and duration of fortune1
  int melody[] = {NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4, 0, NOTE_A4, 0, NOTE_E4};
  int noteDurations[] = { 4,4,4,4,4,4,4,4};
  
  //Loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);    
  }   
  
  
}
void fortune2()
{
  //Note melody and duration of fortune2 
  int melody[] = {NOTE_E4, NOTE_B4, NOTE_DS5, NOTE_E4, NOTE_B4, NOTE_DS5, NOTE_E4, NOTE_B4};
  int noteDurations[] = { 8,8,8,8,8,8,8,8};

  //loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);    
  }   
  

  
}
void fortune3()
{
  //Note melody and duration of fortune3
  int melody[] = {NOTE_A6, NOTE_C6, NOTE_F6, NOTE_C6, NOTE_A6, NOTE_C6, NOTE_F6, NOTE_G6};
  int noteDurations[] = { 4,4,4,4,4,4,4,4};
  
  //loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);    
  }   
}


void fortune4()
{
  //Note melody and duration of fortune4
  int melody[] = {NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_A6, NOTE_B6, NOTE_C7};
  int noteDurations[] = { 16,16,16,16,16,16,16,16};

  //loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);    
  }   
  

  
}
void fortune5()
{
  //Note melody and duration of fortune5
  int melody[] = {NOTE_B4, NOTE_B4, NOTE_D5, NOTE_D5, NOTE_A4, NOTE_A4, NOTE_B4, NOTE_B4};
  int noteDurations[] = { 8,8,8,8,8,8,8,8};

  //loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);    
  }   
  

  
}
void fortune6()
{
  //Note melody and duration of fortune6
  int melody[] = {NOTE_CS5, NOTE_DS5, NOTE_F5, NOTE_FS5, NOTE_GS5, NOTE_FS5, NOTE_F5, NOTE_DS5};
  int noteDurations[] = { 16,16,16,16,16,16,16,16};

  //loop the melody
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);    
  }   
  

  
}
void fortune7()
{
  //Note melody and duration of fortune7
  int melody[] = {NOTE_CS4, NOTE_G4, NOTE_FS4, NOTE_C5, NOTE_B4, NOTE_F5, NOTE_E5, NOTE_A5, NOTE_GS5, NOTE_D6, NOTE_CS4, NOTE_B5};
  int noteDurations[] = { 16,12,16,12,16,12,16,16,16,12,16,16};

  //loop the melody
  for (int thisNote = 0; thisNote < 12; thisNote++)
  {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);    
  }   
  

  
}

void fortune8()
{
    //Note melody and duration of fortune8
    int melody[] = {NOTE_C4, NOTE_DS4, NOTE_E3, NOTE_AS2, 0, NOTE_A4, 0, NOTE_E4};
    int noteDurations[] = { 12,12,12,12,12,12,12,12};

    //loop the melody
    for (int thisNote = 0; thisNote < 8; thisNote++)
    {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);    
    }   
  

  
}

void demo()
{

  for (int i = 0; i < 4; i++)
  {
    start_music();
  }
  for (int i = 0; i < 4; i++)
  {
    fortune1();
  }
  for (int i = 0; i < 4; i++)
  {
    start_music();
  }
  for (int i = 0; i < 4; i++)
  {
    fortune2();
  }
  for (int i = 0; i < 4; i++)
  {
    start_music();
  }
  for (int i = 0; i < 4; i++)
  {
    fortune3();
  }
  for (int i = 0; i < 4; i++)
  {
    start_music();
  }
  for (int i = 0; i < 8; i++)
  {
    fortune4();
  }
  for (int i = 0; i < 4; i++)
  {
    start_music();
  }
  
  for (int i = 0; i < 4; i++)
  {
    fortune5();
  }
  
  for (int i = 0; i < 4; i++)
  {
    start_music();
  }

  for (int i = 0; i < 4; i++)
  {
    fortune6();
  }

  for (int i = 0; i < 4; i++)
  {
    start_music();
  }

  for (int i = 0; i < 4; i++)
  {
    fortune7();
  }
  
  for (int i = 0; i < 4; i++)
  {
    start_music();
  }

  for (int i = 0; i < 4; i++)
  {
    fortune8();
  }
  
  
}
