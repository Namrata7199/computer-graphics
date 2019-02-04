#include<GL/freeglut.h>
#include<math.h>
#include<GL/gl.h>
#include<iostream>

void scene(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	//sky
	glBegin(GL_POLYGON);
	glColor3f(0.0/255.0, 206.0/255.0, 255.0/255.0);
	glVertex2f(-1.0f,1.0f);
	glVertex2f(1.0f,1.0f);
	glVertex2f(1.0f,0.0f);
	glVertex2f(-1.0f,0.0f);
	glEnd();

	//lawn
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glVertex2f(-1.0f,0.0f);
	glVertex2f(1.0f,0.0f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(-1.0f,-1.0f);
	glEnd();

	//hut
	glBegin(GL_POLYGON);
	glColor3f(80.0/255.0,95.0/255.0,63.0/255.0);
	glVertex2f(-0.75f,-0.15f);
	glVertex2f(-0.25f,-0.15f);
	glVertex2f(-0.5f,0.25f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.5f,0.5f,0.5f);
	glVertex2f(-0.7f,-0.15f);
	glVertex2f(-0.3f,-0.15f);
	glVertex2f(-0.3f,-0.55f);
	glVertex2f(-0.7f,-0.55f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(80.0/255.0,95.0/255.0,63.0/255.0);
	glVertex2f(-0.55f,-0.55f);
	glVertex2f(-0.45f,-0.55f);
	glVertex2f(-0.45f,-0.45f);
	glVertex2f(-0.55f,-0.45f);
	glEnd();

	//car
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(0.25f,-0.75);
	glVertex2f(0.85f,-0.75f);
	glVertex2f(0.85f,-0.65f);
	glVertex2f(0.25f,-0.65f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(0.55f,-0.65);
	glVertex2f(0.85f,-0.65f);
	glVertex2f(0.85f,-0.5f);
	glVertex2f(0.55f,-0.5f);
	glEnd();
	GLfloat x,y,xx,yy;
	float angle;
	double radius=0.1;
	radius=0.05;
	x = 0.35,y=-0.75;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for (angle=180.0f;angle<361.0f;angle+=0.2)
	{
		xx = x+sin(angle)*radius;
		yy = y+cos(angle)*radius;
		glVertex2f(xx,yy);
	}
	glEnd();
	x = 0.75,y=-0.75;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for (angle=180.0f;angle<361.0f;angle+=0.2)
	{
		xx = x+sin(angle)*radius;
		yy = y+cos(angle)*radius;
		glVertex2f(xx,yy);
	}
	glEnd();
	
	//rain
	int n = 100;
	//std::cout<<n;
	while(n--)
	{
		int a = (rand()%500)-250;
		int b = (rand()%250);
		glBegin(GL_POINTS);
		glColor3f(1.0,1.0,1.0);
		glVertex2f(a/250.0,b/250.0);
		//glVertex2f((a+10)/250.0,(b-20)/250.0);
		glEnd();
	}

	//cloud
	radius=0.1;
	x = -0.35,y=0.75;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for (angle=180.0f;angle<361.0f;angle+=0.2)
	{
		xx = x+sin(angle)*radius;
		yy = y+cos(angle)*radius;
		glVertex2f(xx,yy);
	}
	glEnd();
	x = -0.45,y=0.75;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for (angle=180.0f;angle<361.0f;angle+=0.2)
	{
		xx = x+sin(angle)*radius;
		yy = y+cos(angle)*radius;
		glVertex2f(xx,yy);
	}
	glEnd();
	radius = 0.05;
	x = -0.4,y=0.65;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for (angle=180.0f;angle<361.0f;angle+=0.2)
	{
		xx = x+sin(angle)*radius;
		yy = y+cos(angle)*radius;
		glVertex2f(xx,yy);
	}
	glEnd();
	x = -0.4,y=0.85;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for (angle=180.0f;angle<361.0f;angle+=0.2)
	{
		xx = x+sin(angle)*radius;
		yy = y+cos(angle)*radius;
		glVertex2f(xx,yy);
	}
	glEnd();

	radius=0.1;
	x = 0.35,y=0.75;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for (angle=180.0f;angle<361.0f;angle+=0.2)
	{
		xx = x+sin(angle)*radius;
		yy = y+cos(angle)*radius;
		glVertex2f(xx,yy);
	}
	glEnd();
	x = 0.45,y=0.75;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for (angle=180.0f;angle<361.0f;angle+=0.2)
	{
		xx = x+sin(angle)*radius;
		yy = y+cos(angle)*radius;
		glVertex2f(xx,yy);
	}
	glEnd();
	radius = 0.05;
	x = 0.4,y=0.65;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for (angle=180.0f;angle<361.0f;angle+=0.2)
	{
		xx = x+sin(angle)*radius;
		yy = y+cos(angle)*radius;
		glVertex2f(xx,yy);
	}
	glEnd();
	x = 0.4,y=0.85;
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for (angle=180.0f;angle<361.0f;angle+=0.2)
	{
		xx = x+sin(angle)*radius;
		yy = y+cos(angle)*radius;
		glVertex2f(xx,yy);
	}
	glEnd();

	glFlush();
}

int main (int argc, char ** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Chess");
    glPointSize(5.0); 
    //gluOrtho2D(0, 500, 0, 500); 
    glutDisplayFunc(scene);
    glutMainLoop();
    return 0;
}
