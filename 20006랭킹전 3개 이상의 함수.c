#include <stdio.h>
#include <string.h>

typedef struct {
    int level;
    char nickname[17];
} Player;

typedef struct {
    int minLevel, maxLevel;
    int count;
    Player players[300];
} Room;

int comparePlayers(const void* a, const void* b) {
    Player* p1 = (Player*)a;
    Player* p2 = (Player*)b;
    return strcmp(p1->nickname, p2->nickname);
}

void addPlayerToRoom(Room* room, Player player) {
    room->players[room->count++] = player;
}

void createNewRoom(Room* room, Player player) {
    room->minLevel = player.level - 10;
    room->maxLevel = player.level + 10;
    room->count = 1;
    room->players[0] = player;
}

void printRoomStatus(Room room, int m) {
    qsort(room.players, room.count, sizeof(Player), comparePlayers);

    if (room.count == m) {
        printf("Started!\n");
    }
    else {
        printf("Waiting!\n");
    }

    for (int j = 0; j < room.count; j++) {
        printf("%d %s\n", room.players[j].level, room.players[j].nickname);
    }
}

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