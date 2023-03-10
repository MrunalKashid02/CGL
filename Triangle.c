//Name- Mrunal Kashid
//Roll No- 23238
//Batch- F10
//Subject- Computer Graphics- Triangle
#include<GL/freeglut.h>
#include<GL/gl.h>

void renderFunction()
{
glClearColor(0.0,1.0,1.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3ub(255,255,0);


glLineWidth(5);
glBegin(GL_TRIANGLES);
	glVertex2f(0.1,0.4);
	glVertex2f(0.7,0.4);
	glVertex2f(0.4,0.8);
	
	
glEnd();
glFlush();
}
int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(400,300);
glutCreateWindow("CGL Program-->Triangle");
glutDisplayFunc(renderFunction);
glutMainLoop();
return 0;
}


