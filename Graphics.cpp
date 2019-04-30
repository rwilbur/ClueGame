#include "Graphics.h"
#include "Shape.h"

enum screenType {
    start, game, dice
};

//initialize
screenType screen;
//start
Rectangles startBackground;
Rectangles playButton;
//game
GLdouble width, height;
int wd;
//dice
Rectangles diceBackground;
Rectangles diceBack;
Circle dot1;
Circle dot2;
Circle dot3;
Circle dot4;
Circle dot5;
Circle dot6;
Rectangles rollButton;
int lastRoll = 6;

void init() {
    screen = start;
    width = 750;
    height = 600;

    //default values
    startBackground.set_position(-10,-10);
    startBackground.set_fill(.09,.21,.13);
    startBackground.set_dimensions(width+20,height+20);

    playButton.set_position(130, 200);
    playButton.set_fill(0.055, 0.169, 0.086);
    playButton.set_dimensions(150, 60);

    diceBackground.set_position(250,150);
    diceBackground.set_fill(.5,.5,.5);
    diceBackground.set_dimensions(250,250);

    diceBack.set_position(325,190);
    diceBack.set_fill(.9,.9,.9);
    diceBack.set_dimensions(100,100);

    rollButton.set_position(325,325);
    rollButton.set_fill(.4,.4,.4);
    rollButton.set_dimensions(100,50);

    dot1.set_radius(7);
    dot2.set_radius(7);
    dot3.set_radius(7);
    dot4.set_radius(7);
    dot5.set_radius(7);
    dot6.set_radius(7);

    dot1.set_fill(1,0,0);
    dot2.set_fill(1,0,0);
    dot3.set_fill(1,0,0);
    dot4.set_fill(1,0,0);
    dot5.set_fill(1,0,0);
    dot6.set_fill(1,0,0);

}

/* Initialize OpenGL Graphics */
void initGL() {
    // Set "clearing" or background color
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void displayStart() {
    startBackground.draw();

    //draw clue title
    string message = "CLUE";
    glColor3f(1, 1, 1);//white
    glRasterPos2i((width/2)-40, 120);
    for (int i = 0; i < message.length(); ++i) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message[i]);
    }

    //Make play button text
    playButton.set_position((width/2)-75, 300);
    playButton.draw();
    message = "Play";
    glColor3f(1, 1, 1);//white
    glRasterPos2i((width/2)-25, 335 );
    for (int i = 0; i < message.length(); ++i) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message[i]);
    }

}

void displayGame(){

}

void displayDice(){
    diceBackground.draw();
    diceBack.draw();
    rollButton.draw();

    //Make roll button text
    string message = "Roll";
    glColor3f(1, 1, 1);//white
    glRasterPos2i(352,355);
    for (int i = 0; i < message.length(); ++i) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message[i]);
    }
}

void drawDiceDots(int n){
    for (int i = 0; i < 7; ++i){

    }

        switch (n){
        case 1:
            dot1.set_position(375,240);
            dot1.draw();
            break;
        case 2:
            dot1.set_position(355,265);
            dot2.set_position(395,215);
            dot1.draw();
            dot2.draw();
            break;
        case 3:
            dot1.set_position(355,265);
            dot2.set_position(395,215);
            dot3.set_position(375,240);
            dot1.draw();
            dot2.draw();
            dot3.draw();
            break;
        case 4:
            dot1.set_position(355,215);
            dot2.set_position(355,265);
            dot3.set_position(395,215);
            dot4.set_position(395,265);
            dot1.draw();
            dot2.draw();
            dot3.draw();
            dot4.draw();
            break;
        case 5:
            dot1.set_position(355,215);
            dot2.set_position(355,265);
            dot3.set_position(395,215);
            dot4.set_position(395,265);
            dot5.set_position(375,240);
            dot1.draw();
            dot2.draw();
            dot3.draw();
            dot4.draw();
            dot5.draw();
            break;
        case 6:
            dot1.set_position(355,215);
            dot2.set_position(355,240);
            dot3.set_position(355,265);
            dot4.set_position(395,215);
            dot5.set_position(395,240);
            dot6.set_position(395,265);
            dot1.draw();
            dot2.draw();
            dot3.draw();
            dot4.draw();
            dot5.draw();
            dot6.draw();
            break;
    }
    glFlush();
}

int rollDice() {
    return ((rand() % 6)+1);
}

/* Handler for window-repaint event. Call back when the window first appears and
 whenever the window needs to be re-painted. */
void display() {
    // tell OpenGL to use the whole window for drawing
    glViewport(0, 0, width, height);

    // do an orthographic parallel projection with the coordinate
    // system set to first quadrant, limited by screen/window size
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, width, height, 0.0, -1.f, 1.f);

    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    switch (screen){
        case start:
            displayStart();
            break;
        case game:
            displayGame();
            break;
        case dice:
            displayDice();
            drawDiceDots(lastRoll);
            break;
    }

    glFlush();  // Render now
}

// http://www.theasciicode.com.ar/ascii-control-characters/escape-ascii-code-27.html
void kbd(unsigned char key, int x, int y)
{
    // escape
    if (key == 27) {
        glutDestroyWindow(wd);
        exit(0);
    }

    glutPostRedisplay();

    return;
}

void kbdS(int key, int x, int y) {
    switch(key) {
        case GLUT_KEY_DOWN:

            break;
        case GLUT_KEY_LEFT:

            break;
        case GLUT_KEY_RIGHT:

            break;
        case GLUT_KEY_UP:

            break;
    }

    glutPostRedisplay();

    return;
}

void cursor(int x, int y) {

    // if the mouse hovers over the play button, change color to lighter green
    if (playButton.overlap(x, y)) {
        playButton.set_fill(0.02, 0.098, 0.043);//darker green
    } else {
        playButton.set_fill(0.055, 0.169, 0.086);//green (Default color)
    }

    // if the mouse hovers over the roll button darken grey
    if (rollButton.overlap(x, y)) {
        rollButton.set_fill(0.3, 0.3, 0.3);
    } else {
        rollButton.set_fill(0.4, 0.4, 0.4);// (Default color)
    }

    glutPostRedisplay();
}

// button will be GLUT_LEFT_BUTTON or GLUT_RIGHT_BUTTON
// state will be GLUT_UP or GLUT_DOWN
void mouse(int button, int state, int x, int y) {

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && screen == start) {
        //if clicked on play button set switch to game screen
        if (playButton.overlap(x, y)) {
            screen = game;
        }
    }if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && screen == dice){
        //if clicked on roll button run roll dice function
        if (playButton.overlap(x, y)) {
            lastRoll = rollDice();
            cout<<lastRoll;
            drawDiceDots(lastRoll);
            glutPostRedisplay();
        }
    }

    glutPostRedisplay();
}

void timer(int extra) {

    glutPostRedisplay();
    glutTimerFunc(30, timer, 0);
}

/* Main function: GLUT runs as a console application starting at main()  */
int graphicsPlay(int argc, char** argv) {

    init();

    glutInit(&argc, argv);          // Initialize GLUT

    glutInitDisplayMode(GLUT_RGBA);

    glutInitWindowSize((int)width, (int)height);
    glutInitWindowPosition(100, 200); // Position the window's initial top-left corner
    /* create the window and store the handle to it */
    wd = glutCreateWindow("Clue Game" /* title */ );

    // Register callback handler for window re-paint event
    glutDisplayFunc(display);

    // Our own OpenGL initialization
    initGL();

    // register keyboard press event processing function
    // works for numbers, letters, spacebar, etc.
    glutKeyboardFunc(kbd);

    // register special event: function keys, arrows, etc.
    glutSpecialFunc(kbdS);

    // handles mouse movement
    glutPassiveMotionFunc(cursor);

    // handles mouse click
    glutMouseFunc(mouse);

    // handles timer
    glutTimerFunc(0, timer, 0);

    // Enter the event-processing loop
    glutMainLoop();
    return 0;
}
