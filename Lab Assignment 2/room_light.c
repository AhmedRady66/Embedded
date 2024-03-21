#include "building.h"

/**
 * room_light - Function to turn on light if the sensor value is 1 when person enter thr room.
 * @light_sensor: Input senor value.
 * Return: 0 Success.
 */
void room_light(int light_sensor)
{
    if (light_sensor == 1)
    {
        printf("Turn on the light\n");
    }
    else
    {
        printf("Turn off the light");
    }
}
