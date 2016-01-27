/*
 * Long x 10, Achievement x 4
 * 
 * 0 - turn off long strip
 * 1 - turn on long strip forward animation
 * 2 - turn on long strip reverse animation
 * 3 - turn on achievement forward animation
 * 4 - turn off achievement 
 * */

void process_command(int incoming) {

    switch(incoming) {

        //all off
        case('0'): 
            Strip1.TurnOff(); Strip2.TurnOff(); Strip3.TurnOff(); Strip4.TurnOff();
            Strip5.TurnOff(); Strip6.TurnOff(); Strip7.TurnOff(); Strip8.TurnOff();
            Strip9.TurnOff(); Strip10.TurnOff(); 
            
            Strip11.TurnOff(); Strip12.TurnOff(); Strip13.TurnOff(); Strip14.TurnOff();
        break; 
        case('1'): Strip1.Scanner( Strip1.whiteColor, MY_INTERVAL, 1 ); break;
        case('2'): Strip10.Scanner( Strip1.whiteColor, MY_INTERVAL, -1); break;   

        //achievement
        case('3'): 
           Strip11.Fade( Strip1.whiteColor, 128, FADE_INTERVAL, 1 ); 
           
        break;
        case('4'): 
        //safe option
//            Strip11.TurnOff(); Strip12.TurnOff(); Strip13.TurnOff(); Strip14.TurnOff();  

            //fade off all rapidly at once. Not sure if this will work.
            Strip11.Fade( Strip1.whiteColor, 128, 1, 0); 
            Strip12.Fade( Strip1.whiteColor, 128, 1, 0);
            Strip13.Fade( Strip1.whiteColor, 128, 1, 0);
            Strip14.Fade( Strip1.whiteColor, 128, 1, 0);
        break;   
  }
 }
  
