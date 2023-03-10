//Name-Mrunal Kashid
//Roll NO-23238
//Batch- F10
//Subject- Computer Graphics - Circle
#include<GL/freeglut.h>
#include<GL/glut.h>
#include<math.h>
void lineSegment(void)
{
float Theta;
glClearColor(1.0,1.0,1.0,0.0);  

gluOrtho2D(0,500,0,500);  
glClear(GL_COLOR_BUFFER_BIT);    
glColor3f(1.0,0.0,0.4);      
glBegin(GL_POLYGON);
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(250+100*cos(Theta),250+150*sin(Theta));
		
	}
glEnd();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(400,300);
glutCreateWindow("Circle");
glutDisplayFunc(lineSegment);
glutMainLoop();
return 0;
}
