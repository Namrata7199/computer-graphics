#include <GL/freeglut.h>
#include<GL/gl.h>
#include<math.h>
#define pi 3.142857

void display_polygon(void)
{
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	GLfloat ang=2*pi/11;
	glBegin(GL_POLYGON);
		for(i=0;i<11;i++)
		{
			glVertex2f(1.0*cos(i*ang),1.0*sin(i*ang));
		}
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