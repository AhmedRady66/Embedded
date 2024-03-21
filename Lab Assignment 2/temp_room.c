#include "building.h"

/**
 * temp_room - Function to open A/C if temperature >= 30.
 * @temp_senor: Input of room's temperature.
 * @sensor_value: Default value of the sensor
 * Return: 0 Success.
 */
void temp_room(int temp_senor)
{
    int sensor_value = 0;
    if (temp_senor >= 30)
    {
        sensor_value = 1;
        printf("Room temperature is %d Sensor value of temperature: %d\nOpen the smart A/C\n", temp_senor, sensor_value);
    }
    else
    {
        printf("Room temperature is %d Sensor value of temperature: %d\nDon't open the smart A/C\n", temp_senor, sensor_value);
    }
}
