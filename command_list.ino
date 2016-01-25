/*
Serial messages (byte 0 - 255):
 * 0 - turn off long strip
 * 1 - turn off button 1 light
 * 2 - turn on button 2 light
 * 3 - turn off button 2 light
 * 4 - turn on rfid 1 tag 1 light
 * 5 - turn on rfid 1 tag 2 light
 * 6 - turn on rfid 1 tag 3 light
 * 7 - turn on rfid 1 tag 4 light
 * 8 - turn on rfid 1 circle led waiting mode
 * 9 - turn off rfid 1 circle led  
 * a - turn on rfid 2 tag 1 light
 * b - turn on rfid 2 tag 2 light
 * c - turn on rfid 2 tag 3 light
 * d - turn on rfid 2 tag 4 light
 * e - turn on rfid 2 circle led waiting mode
 * f - turn off rfid 2 circle led 
 * */

void process_command(int incoming) {

    switch(incoming) {

        //turn off
        case('0'): 
            Strip1.ColorSet(Strip1.noColor);
            Strip2.ColorSet(Strip1.noColor);
            Strip3.ColorSet(Strip1.noColor);
            Strip4.ColorSet(Strip1.noColor);
            Strip5.ColorSet(Strip1.noColor);
            Strip6.ColorSet(Strip1.noColor);
            Strip7.ColorSet(Strip1.noColor);
            Strip8.ColorSet(Strip1.noColor);
            Strip9.ColorSet(Strip1.noColor);
            Strip10.ColorSet(Strip1.noColor);
            Strip11.ColorSet(Strip1.noColor);
        break; 

        //start forward animation
        case('1'): Strip1.Scanner( Strip1.Color(255, 255, 255), 1, 1 ); break;
        
        //start reverse animation
        case('2'): Strip10.Scanner( Strip1.Color(255, 255, 255), 1, -1); break;   
  }
 }
  
