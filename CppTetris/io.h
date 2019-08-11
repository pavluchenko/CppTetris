#ifndef IO_H
#define IO_H

enum color {BLACK, RED, GREEN, BLUE, CYAN, MAGENTA, YELLOW, WHITE, COLOR_MAX}; // Colors

class IO
{
public:

    IO						();

    void drawRectangle		(int pX1, int pY1, int pX2, int pY2, enum color pC);
    void clearScreen		();
    int getScreenHeight		();
    int initGraph			();
    int pollkey				();
    int getkey				();
    int isKeyDown			(int pKey);
    void updateScreen		();

};

#endif // IO_H
