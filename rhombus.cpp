#include <GL/freeglut.h>
#include<GL/gl.h>

void display_polygon(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glVertex2f(0.5f,0.0f);
		glVertex2f(0.0f,0.5f);
		glVertex2f(-0.5f,-0.0f);
		glVertex2f(0.0f,-0.5f);
	glEnd();
	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Polygon");
    glutDisplayFunc(display_polygon);
    glutMainLoop();
    return 0;
}