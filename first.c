//Name-Mrunal Kashid
//Roll NO-23238
//Batch- F10
//Subject- Computer Graphics - First-Line
#include<GL/freeglut.h>
#include<GL/glut.h>
void lineSegment(void)
{
glClearColor(1.0,1.0,1.0,0.0);  //decide background color

gluOrtho2D(0.0,200.0,0.0,150.0);  //used for2D object specification
glClear(GL_COLOR_BUFFER_BIT);    // used to put window on screen
glColor3f(1.0,0.0,0.4);          // decides color of object
glBegin(GL_LINES);

glVertex2i(180,15);
glVertex2i(10,145);
glEnd();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(400,300);
glutCreateWindow("First Graphics Program");
glutDisplayFunc(lineSegment);
glutMainLoop();
return 0;
}
