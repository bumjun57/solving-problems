#ifndef ROOM_H
#define ROOM_H

#include "player.h"

typedef struct {
    int minLevel, maxLevel;
    int count;
    Player players[300];
} Room;

void addPlayerToRoom(Room* room, Player player);

void createNewRoom(Room* room, Player player);

void printRoomStatus(Room room, int m);

#endif
