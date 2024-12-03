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
                rooms[j].players[rooms[j].count++] = players[i];
                placed = 1;
                break;
            }
        }
        if (!placed) {
            rooms[roomCount].minLevel = players[i].level - 10;
            rooms[roomCount].maxLevel = players[i].level + 10;
            rooms[roomCount].count = 1;
            rooms[roomCount].players[0] = players[i];
            roomCount++;
        }
    }

    for (int i = 0; i < roomCount; i++) {
        qsort(rooms[i].players, rooms[i].count, sizeof(Player), comparePlayers);

        if (rooms[i].count == m) {
            printf("Started!\n");
        }
        else {
            printf("Waiting!\n");
        }

        for (int j = 0; j < rooms[i].count; j++) {
            printf("%d %s\n", rooms[i].players[j].level, rooms[i].players[j].nickname);
        }
    }

    return 0;
}