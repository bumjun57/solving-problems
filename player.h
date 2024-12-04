#ifndef PLAYER_H
#define PLAYER_H

#define MAX_NICKNAME_LENGTH 17

typedef struct {
    int level;
    char nickname[MAX_NICKNAME_LENGTH];
} Player;

int comparePlayers(const void* a, const void* b);

#endif

