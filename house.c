//Name-Mrunal Kashid
//Roll NO-23238
//Batch- F10
//Subject- Computer Graphics - House CGL program
#include<GL/freeglut.h>
#include<GL/gl.h>


void init(void)
{
glClearColor(1.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,400.0,0.0,400.0);
}
void drawShapes(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,0.0,0.0);
glPointSize(5.0);

glColor3f(1.0,0.0,0.0);

glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
	glVertex2i(200,300);
	glVertex2i(100,200);
	glVertex2i(300,200);
	glVertex2i(200,300);
	

	
glBegin(GL_TRIANGLES);
	glColor3f(0.0,1.0,1.0);

	glVertex2i(100,200);
	glVertex2i(100,0);
	
	glVertex2i(100,0);
	glVertex2i(300,0);
	
	glVertex2i(300,0);
	glVertex2i(300,200);
	
	glVertex2i(300,200);
	glVertex2i(100,200);

glEnd();
glFlush();
}


int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(400,300);
glutCreateWindow("CGL Program--> House");
init();
glutDisplayFunc(drawShapes);
glutMainLoop();
return 0;
}


