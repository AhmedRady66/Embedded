#include "temp.h"

/**
 * motor - Function to open specific motor depend on the temperature.
 * @temp_sensor: temperature sensor.
 * Return: 0 Success.
 */
void motor(int temp_sensor)
{
    int motor_1 = 0;
    int motor_2 = 0;

    if (temp_sensor > 30)
    {
        motor_2 = 2;
        printf("Enable fan motor 2 with High speed %d\n", motor_2);
    }
    else if (temp_sensor >= 26)
    {
        motor_2 = 1;
        printf("Disable fan motor 2 with low speed %d\n", motor_2);
    }

    if (temp_sensor > 22 && temp_sensor < 26)
    {
        motor_1 = 1;
        printf("Fan motor 1 is open\n");
    }

    else if (temp_sensor < 22)
    {
        printf("Disable both motors motor.1 = %d and motor.2 = %d", motor_1, motor_2);
    }
}
