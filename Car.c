//Name-Mrunal Kashid
//Roll NO-23238
//Batch- F10
//Subject- Computer Graphics (Car)
#include<GL/freeglut.h>
#include<GL/gl.h>
#include<math.h>
void renderFunction()
{
float Theta;
glClearColor(1.0,1.0,1.0,0.0);  //decide background color

gluOrtho2D(0.0,200.0,0.0,150.0);  //used for2D object specification
//gluOrtho2D(0,500,0,500);
glClear(GL_COLOR_BUFFER_BIT);    // used to put window on screen
    
//glBegin(GL_POLYGON);
glColor3f(1.0,0.0,0.4); 
glBegin(GL_POLYGON);
        glVertex2i(70,90);
        glVertex2i(130,90);
        glVertex2i(130,50);
        glVertex2i(70,50);
        glEnd();
glFlush();
glBegin(GL_POLYGON);
// wheel 1
glColor3f(0.0,1.0,0.0);
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(85+10*cos(Theta),45+10*sin(Theta));
		
		
	}
	glEnd();
	glFlush();  
glBegin(GL_POLYGON);
// wheel 2
glColor3f(0.0,1.0,0.0);
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(115+10*cos(Theta),45+10*sin(Theta));
		
		
	}
	glEnd();
	glFlush();  
	
    

	

}
int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(400,300);//400,300
glutCreateWindow("Car OpenGl Program");
glutDisplayFunc(renderFunction);
glutMainLoop();
return 0;
}
