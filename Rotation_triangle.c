//Name- Mrunal Kashid
//Roll No-23238
//Batch-F10
//Subject-Computer Graphics- Rotation Triangle
#include<GL/freeglut.h>
#include<GL/gl.h>
#include<stdio.h>
GLfloat r,px,py;
void renderFunction()
{
glClearColor(0.0,1.0,1.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.0,0.0);


glLineWidth(5);
glBegin(GL_TRIANGLES);
	glVertex2f(0.1,0.4);
	glVertex2f(0.7,0.4);
	glVertex2f(0.4,0.8);
	glEnd();
glFlush();

glColor3f(1.0,0.0,0.0);
glLoadIdentity();
glTranslatef(px,py,0);
glRotatef(r,0,0,1);
glTranslatef(-px,-py,0);
glBegin(GL_LINE_LOOP);
glVertex2f(0.1,0.4);
glVertex2f(0.7,0.4);
	glVertex2f(0.4,0.8);
	glEnd();
glFlush();

}
int main(int argc, char **argv)
{

	printf("Enter rotation pivot points");
	scanf("%f%f",&px,&py);
	printf("Enter rotation angle");
	scanf("%f",&r);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(400,300);
glutCreateWindow("Sample Program");
glutDisplayFunc(renderFunction);
glutMainLoop();
return 0;
}


