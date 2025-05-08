#include <gb/gb.h>

void waitSeconds(int seconds) {
    delay(seconds * 1000);
}

void waitMinutes(int minutes) {
    delay(minutes * 60 * 1000);
}

long millisToSeconds(int milliseconds) {
    return milliseconds/1000;
}

long secondsToMillis(int seconds) {
    return seconds * 1000;
}

long millisToMinutes(int milliseconds) {
    return milliseconds  /1000 / 60;
}

long minutesToMilli(int minutes) {
    return minutes * 60 * 1000;
}