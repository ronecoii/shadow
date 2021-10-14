#include "shadow.h"

int main() {
    const float lattitude = 30.25;
    const int height = 30 * 12;
    int time;
    int map[1000][1000];
    int x,y;

    for (time=0; time<(365*12*60); ++time)
    {
        int date = time / 12 / 60;
        float alt = get_altitude(date, time, lattitude);
        
        float direction = get_direction(date, time);
        double length = get_length(height, alt);

        int tip_x = length * cos(direction);
        for (x = tip_x; x > 0; --x)
            {
                y = x * tan(direction);
                ++ map[x][y];
            }
    }
    
    return 0;
    
}