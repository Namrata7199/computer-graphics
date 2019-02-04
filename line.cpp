#include <GL/freeglut.h>
#include<GL/gl.h>

void display_line(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
		glColor3f(1.0f,0.0f,0.0f);
		glVertex2f(0.0f,0.0f);
		glVertex2f(1.0f,1.0f);
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
    glutDisplayFunc(display_line);
    glutMainLoop();
    return 0;
}