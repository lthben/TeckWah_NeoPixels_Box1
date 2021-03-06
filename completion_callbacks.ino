void Strip1Complete() {

  if (DEBUG) Serial.println("strip 1 complete");
  Strip1.ActivePattern = NONE;
  Strip1.ColorSet(Strip1.noColor);

  if (Strip1.Direction == FORWARD)
  {
    Strip2.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, 1 );
  } else
  {
    Serial.println("light4b_finished");
  }
}

void Strip2Complete() {

  if (DEBUG) Serial.println("strip 2 complete");
  Strip2.ActivePattern = NONE;
  Strip2.ColorSet(Strip1.noColor);

  if (Strip2.Direction == FORWARD)
  {
    Strip3.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, 1 );
  } else
  {
    Strip1.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, -1 );
  }
}

void Strip3Complete() {

  if (DEBUG) Serial.println("strip 3 complete");
  Strip3.ActivePattern = NONE;
  Strip3.ColorSet(Strip1.noColor);

  if (Strip3.Direction == FORWARD)
  {
    Strip4.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, 1 );
  } else
  {
    Strip2.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, -1 );
  }
}

void Strip4Complete() {

  if (DEBUG) Serial.println("strip 4 complete");
  Strip4.ActivePattern = NONE;
  Strip4.ColorSet(Strip1.noColor);

  if (Strip4.Direction == FORWARD)
  {
    Strip5.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, 1 );
  } else
  {
    Strip3.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, -1 );
  }
}

void Strip5Complete() {

  if (DEBUG) Serial.println("strip 5 complete");
  Strip5.ActivePattern = NONE;
  Strip5.ColorSet(Strip1.noColor);

  if (Strip5.Direction == FORWARD)
  {
    Strip6.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, 1 );
  } else
  {
    Strip4.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, -1 );
  }
}

void Strip6Complete() {

  if (DEBUG) Serial.println("strip 6 complete");
  Strip6.ActivePattern = NONE;
  Strip6.ColorSet(Strip1.noColor);

  if (Strip6.Direction == FORWARD)
  {
    Strip7.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, 1 );
  } else
  {
    Strip5.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, -1 );
  }
}

void Strip7Complete() {

  if (DEBUG) Serial.println("strip 7 complete");
  Strip7.ActivePattern = NONE;
  Strip7.ColorSet(Strip1.noColor);

  if (Strip7.Direction == FORWARD)
  {
    Strip8.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, 1 );
  } else
  {
    Strip6.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, -1 );
  }
}

void Strip8Complete() {

  if (DEBUG) Serial.println("strip 8 complete");
  Strip8.ActivePattern = NONE;
  Strip8.ColorSet(Strip1.noColor);

  if (Strip8.Direction == FORWARD)
  {
    Strip9.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, 1 );
  } else
  {
    Strip7.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, -1 );
  }
}

void Strip9Complete() {

  if (DEBUG) Serial.println("strip 9 complete");
  Strip9.ActivePattern = NONE;
  Strip9.ColorSet(Strip1.noColor);

  if (Strip9.Direction == FORWARD)
  {
    Strip10.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, 1 );
  } else
  {
    Strip8.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, -1 );
  }
}

void Strip10Complete() {

  if (DEBUG) Serial.println("strip 10 complete");
  Strip10.ActivePattern = NONE;
  Strip10.ColorSet(Strip1.noColor);

  if (Strip10.Direction == FORWARD)
  {
    Serial.println("light4a_finished");
  } else
  {
    Strip9.Scanner( Strip1.Color(255, 255, 255), MY_INTERVAL, -1 );
  }
}

void Strip11Complete() { //achievement1

    if (DEBUG) Serial.println("strip 11 complete");
    Strip11.ActivePattern = NONE; //prevent fade update

    if (Strip11.Direction == FORWARD) { //trigger the next pixel
        delay(ACHIEVEMENT_DELAY);
        Strip12.Fade( Strip1.whiteColor, 128, FADE_INTERVAL, 1); 
    }
}

void Strip12Complete() { //achievement2

    if (DEBUG) Serial.println("strip 12 complete");
    Strip12.ActivePattern = NONE; //prevent fade update

    if (Strip12.Direction == FORWARD) { //trigger the next pixel
        delay(ACHIEVEMENT_DELAY);
        Strip13.Fade( Strip1.whiteColor, 128, FADE_INTERVAL, 1);
    }
}

void Strip13Complete() { //achievement3

    if (DEBUG) Serial.println("strip 13 complete");
    Strip13.ActivePattern = NONE; //prevent fade update

    if (Strip13.Direction == FORWARD) { //trigger the next pixel
        delay(ACHIEVEMENT_DELAY);
        Strip14.Fade( Strip1.whiteColor, 128, FADE_INTERVAL, 1);
    }
}

void Strip14Complete() { //achievement4
 
    if (DEBUG) Serial.println("strip 14 complete");
    Strip14.ActivePattern = NONE; //prevent fade update

    Serial.println("light10_finished");//notify the Flash client 
}


