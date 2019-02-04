#include <GL/freeglut.h>
#include<GL/gl.h>

void display_triangle(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
		glColor3f(0.0f,1.0f,0.0f);
		glVertex2f(0.5f,0.5f);
		glVertex2f(-0.5f,0.5f);
		glVertex2f(0.0f,0.0f);
	glEnd();
	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Line");
    glutDisplayFunc(display_triangle);
    glutMainLoop();
    return 0;
}