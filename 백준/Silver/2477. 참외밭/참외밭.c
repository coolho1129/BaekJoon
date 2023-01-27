#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 



typedef struct {
    int x, y;
}coordinate;

int main() {

    int k, a, b, area_a = 0, area_b = 0, x = 0, y = 0;
    scanf("%d", &k);
    coordinate cor[7];

    for (int i = 0; i < 6; i++) {
        scanf("%d %d", &a, &b);
        switch (a) {
        case 1:
            x += b;
            break;
        case 2:
            x -= b;
            break;
        case 3:
            y -= b;
            break;
        case 4:
            y += b;
            break;
        }
        cor[i].x = x;
        cor[i].y = y;
    }
    cor[6] = cor[0];
    for (int i = 0; i < 6; i++) {
        area_a += cor[i].x * cor[i + 1].y;
        area_b += cor[i].y * cor[i + 1].x;
    }
    printf("%d", (abs(area_a - area_b) / 2) * k);
    return 0;
}
