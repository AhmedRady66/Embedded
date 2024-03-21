#include "building.h"

/**
 * readid - Function to read id to open the door.
 * @id: Input value of id.
 * @sensor_door: Default value of the sensor
 * Return: 0 Success.
 */
void readid(int id)
{
    int sensor_door = 0;
    if (id == 44203)
    {
        sensor_door = 1;
        printf("sensor value: %d\nDoor is opend\n", sensor_door);
    }
    else
    {
        printf("sensor value: %d\nId dosen't have access door still closed\n", sensor_door);
    }
}
