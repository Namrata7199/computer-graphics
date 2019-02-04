#include<GL/freeglut.h>
#include<math.h>
#include<GL/gl.h>

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
	glColor3f(90.0/255.0, 195.0/255.0, 63.0/255.0);
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
	glColor3f(1.0f,1.0f,1.0f);
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

	//sun
	float x1,y1,x2,y2;
	float angle;
	double radius=0.1;
	x1 = 0.5,y1=0.6;
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1,y1);
	for (angle=1.0f;angle<361.0f;angle+=0.2)
	{
		x2 = x1+sin(angle)*radius;
		y2 = y1+cos(angle)*radius;
		glVertex2f(x2,y2);
	}
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

	//cloud
	radius=0.1;
	x = -0.35,y=0.75;
	glColor3f(1.0,1.0,1.0);x = -0.35,y=0.75;
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

	glFlush();
}

int main (int argc, char ** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Chess");
    glutDisplayFunc(scene);
    glutMainLoop();
    return 0;
}
