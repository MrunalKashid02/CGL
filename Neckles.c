//Name-Mrunal Kashid
//Roll No-23238
//Batch- F10
//Subject- Computer Graphics-Neckles
#include<GL/freeglut.h>
#include<GL/glut.h>
#include<math.h>
void lineSegment(void)
{
float Theta;
glClearColor(1.0,1.0,0.0,0.0);  

gluOrtho2D(500,0,500,0); 
glLineWidth(5); 
glClear(GL_COLOR_BUFFER_BIT);    
glColor3f(1.0,0.0,0.4);      
glBegin(GL_LINES);
	for(int i=0; i<180;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(250+100*cos(Theta),250+150*sin(Theta));
		
		
	}
	
	glEnd();
	glFlush();
	//1
 
glBegin(GL_POLYGON);

glColor3f(1.0,0.4,1.0);
// fifth circle
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(207+20*cos(Theta),410+20*sin(Theta));
		
		
	}
	glEnd();
	glFlush();
	
	//6	
glBegin(GL_POLYGON);
glColor3f(0.847059,0.196078,0.6);
// sixth circle
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(165+20*cos(Theta),370+20*sin(Theta));
		
		
	}
	glEnd();
	glFlush();
	//7
glBegin(GL_POLYGON);
// seventh circle
glColor3f(0.7,0.8,0.7);
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(135+20*cos(Theta),310+20*sin(Theta));
		
		
	}
	glEnd();
	glFlush();
	//4
glBegin(GL_POLYGON);
// first circle 
glColor3f(0.0,0.0,1.0);
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(365+20*cos(Theta),300+20*sin(Theta));
		
		
	}
	glEnd();
	glFlush();
	//2
glBegin(GL_POLYGON);
// second circle
glColor3f(1.0,0.0,0.4);
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(345+20*cos(Theta),360+20*sin(Theta));
		
		
	}
	glEnd();
	glFlush();
	//5	
glBegin(GL_POLYGON);
// third cicle
glColor3f(0.0,1.0,0.0);
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(310+20*cos(Theta),400+20*sin(Theta));
		
		
	}
	glEnd();
	glFlush();
	//3
glBegin(GL_POLYGON);
// fourth circle
glColor3f(0.0,1.0,1.0);
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(260+20*cos(Theta),420+20*sin(Theta));
		
		
	}
	glEnd();
	glFlush();
	
	//sub circle
        //1	
glBegin(GL_POLYGON);
// fourth sub circle
glColor3f(1.0,1.0,0.0); 
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(260+10*cos(Theta),420+10*sin(Theta));
		
		
	}
	

glEnd();
glFlush();
glBegin(GL_POLYGON);
// first sub circle
glColor3f(1.0,1.0,0.0); 
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(365+10*cos(Theta),300+10*sin(Theta));
		
		
	}
	

glEnd();
glFlush();

glBegin(GL_POLYGON);
// second sub circle
glColor3f(1.0,1.0,0.0); 
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(345+10*cos(Theta),360+10*sin(Theta));
		
		
	}
	

glEnd();
glFlush();

glBegin(GL_POLYGON);
// third sub circle
glColor3f(1.0,1.0,0.0); 
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(310+10*cos(Theta),400+10*sin(Theta));
		
		
	}
	

glEnd();
glFlush();
glBegin(GL_POLYGON);
// fifth sub circle
glColor3f(1.0,1.0,0.0); 
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(207+10*cos(Theta),410+10*sin(Theta));
		
		
	}
	

glEnd();
glFlush();
glBegin(GL_POLYGON);
// sixth sub circle
glColor3f(1.0,1.0,0.0); 
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(165+10*cos(Theta),370+10*sin(Theta));
		
		
	}
	

glEnd();
glFlush();
glBegin(GL_POLYGON);
// first sub circle
glColor3f(1.0,1.0,0.0); 
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(135+10*cos(Theta),310+10*sin(Theta));
		
		
	}
	

glEnd();
glFlush();
glBegin(GL_POLYGON);
// sub1
glColor3f(0.0,0.0,0.0); 
	for(int i=0; i<360;i++)
	{
		Theta=i*3.142/180;
		glVertex2f(260+5*cos(Theta),445+5*sin(Theta));
		
		
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
glutCreateWindow("CG Program---> Neckles");
glutDisplayFunc(lineSegment);
glutMainLoop();
return 0;
}
