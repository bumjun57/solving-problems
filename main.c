#include <stdio.h>
#include <string.h>
#include "player.h"
#include "room.h"

int main() {
    int p, m;
    scanf("%d %d", &p, &m);

    Player players[300];
    Room rooms[300] = { 0 };
    int roomCount = 0;

    for (int i = 0; i < p; i++) {
        scanf("%d %s", &players[i].level, players[i].nickname);
    }

    for (int i = 0; i < p; i++) {
        int placed = 0; 
        for (int j = 0; j < roomCount; j++) {
            if (rooms[j].count < m && players[i].level >= rooms[j].minLevel && players[i].level <= rooms[j].maxLevel) {
                addPlayerToRoom(&rooms[j], players[i]);
                placed = 1;
                break;
            }
        }
        if (!placed) {
            createNewRoom(&rooms[roomCount], players[i]);
            roomCount++;
        }
    }

    for (int i = 0; i < roomCount; i++) {
        printRoomStatus(rooms[i], m);
    }

    return 0;
}
