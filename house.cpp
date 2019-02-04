#include <GL/freeglut.h>
#include<GL/gl.h>

void display_polygon(void)
{
	//glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(0.4f,0.0f);
		glVertex2f(-0.4f,0.0f);
		glVertex2f(-0.4f,-0.9f);
		glVertex2f(0.4f,-0.9f);
	glEnd();
	glFlush();
}

void display_triangle(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
		glColor3f(0.5f,0.5f,0.0f);
		glVertex2f(0.5f,0.0f);
		glVertex2f(-0.5f,0.0f);
		glVertex2f(0.0f,0.9f);
	glEnd();
	glFlush();
}

void display_rect(void)
{
	glBegin(GL_POLYGON);
		glColor3f(0.5f,0.5f,0.0f);
		glVertex2f(0.25f,-0.9f);
		glVertex2f(-0.25f,-0.9f);
		glVertex2f(-0.25f,-0.5f);
		glVertex2f(0.25f,-0.5f);
	glEnd();
	glFlush();
}

void display_house(void)
{
	display_triangle();
	display_polygon();
	display_rect();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("House");
    glutDisplayFunc(display_house);
    glutMainLoop();
    return 0;
}