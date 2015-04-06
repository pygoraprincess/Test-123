
#include "pitches.h"


// notes in the melody:
int melody[] = {
  NOTE_G4, NOTE_DS5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_C5, NOTE_G4, 
  NOTE_G4, NOTE_C5, NOTE_CS5, NOTE_C5, NOTE_AS4, NOTE_GS4, NOTE_G4, NOTE_GS4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
   4, 4/3, 4, 4/3, 4, 4, 4/3, 4, 4, 2, 4, 4, 2, 4, 4, 
};

void setup() {
  playrandomsong();
}

void loop() {
}

void playsong() {
 for (int thisNote = 0; thisNote < sizeof(melody); thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    delay(noteDuration * 1.30);
    // stop the tone playing:
    noTone(8);
  }
}

void playrandomsong() {
  for(int i = 0; i < 10; i++){
    int noteDuration = 1000 / 16;
    tone(8, rand() % 5000, noteDuration);
    delay(noteDuration * 1.30);
  }
}
