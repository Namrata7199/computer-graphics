 #include<stdio.h> 
#include<GL/glut.h> 
#include<math.h> 
#define pi 3.142857 
  
void myInit (void) 
{ 
    glClearColor(0.0, 0.0, 0.0, 1.0); 
    glColor3f(0.0, 1.0, 0.0); 
    glPointSize(1.0); 
    //glMatrixMode(GL_PROJECTION);  
    //glLoadIdentity(); 
    gluOrtho2D(-780, 780, -420, 420); 
} 
  
void display_circle (void)  
{ 
    glClear(GL_COLOR_BUFFER_BIT); 
    glBegin(GL_POINTS); 
    float x, y, i; 
    for ( i = 0; i < (2 * pi); i += 0.001) 
    { 
        x = 200 * cos(i); 
        y = 200 * sin(i); 
          
        glVertex2i(x, y); 
    } 
    glEnd(); 
    glFlush(); 
} 

void display_line(GLfloat x1,GLfloat y1,GLfloat x2,GLfloat y2)
{
    //glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
        glColor3f(1.0f,0.0f,0.0f);
        glVertex2f(x1,y1);
        glVertex2f(x2,y2);
    glEnd();
    glFlush();
}

void display_clock(void)
{
    display_circle();
    display_line(0.0f,0.0f,156,90);
    display_line(0.0f,0.0f,106,106);
    display_line(0.0f,0.0f,50,90);
} 
int main (int argc, char** argv) 
{ 
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
    glutInitWindowSize(1366, 768); 
    glutInitWindowPosition(0, 0); 
    glutCreateWindow("Circle Drawing"); 
    myInit(); 
      
    glutDisplayFunc(display_clock); 
    glutMainLoop(); 
} 