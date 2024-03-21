#include "building.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);
    readid(id);
    room_light(1);
    temp_room(20);
    return (0);
}
