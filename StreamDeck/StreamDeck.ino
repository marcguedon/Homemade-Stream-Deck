/*  
 *  AUTHOR : MARC GUEDON
 *  WEBSITE : http://thedraill.e-monsite.com/
 *  INSTAGRAM : https://www.instagram.com/guedonmarc/
 */

#include <Keyboard.h>

void setup()
{
    for (int i = 2; i < 11; i++)
        pinMode(i, INPUT_PULLUP); //Pin assignment 2 to 10 input

    Keyboard.begin();
    Serial.begin(9600);
}

void loop() {
    while (digitalRead(10) == HIGH) //While the switch is on
    {
        if (digitalRead(2) == LOW)
        {
            Keyboard.write(0xF4); //Press F17
            delay(100);
        }

        else if (digitalRead(3) == LOW)
        {
            Keyboard.write(0xF5); //Press F18
            delay(100);
        }

        else if (digitalRead(4) == LOW)
        {
            Keyboard.write(0xF6); //Press F19
            delay(100);
        }

        else if (digitalRead(5) == LOW)
        {
            Keyboard.write(0xF7); //Press F20
            delay(100);
        }
        else if (digitalRead(6) == LOW)
        {
            Keyboard.write(0xF8); //Press F21
            delay(100);
        }

        else if (digitalRead(7) == LOW)
        {
            Keyboard.write(0xF9); //Press F22
            delay(100);
        }

        else if (digitalRead(8) == LOW)
        {
            Keyboard.write(0xFA); //Press F23
            delay(100);
        }

        else if (digitalRead(9) == LOW)
        {
            Keyboard.write(0xFB); //Press F24
            delay(100);
        }
    }
}
