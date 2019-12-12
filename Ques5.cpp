//Creating a Triangle Fan
#include "GL/freeglut.h"
#include "GL/gl.h"
float _angle=0.0f;
void drawTriangle(){
glClearColor(0.3,0.4,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.0,1.0);
glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(0.0,0.0);
glVertex2f(0.0,0.3);
glVertex2f(0.2,0.3);
glVertex2f(0.3,0.2);
glVertex2f(0.35,0.05);
glVertex2f(0.3,-0.1);
glVertex2f(0.2,-0.2);
glVertex2f(0.0,-0.25);
glVertex2f(-0.2,-0.2);
glVertex2f(-0.3,-0.1);
glEnd();
glFlush();
}
int main(int argc, char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(900,700);
glutInitWindowPosition(100,100);
glutCreateWindow("OpenGl - Creating a Triangle Fan");
glutDisplayFunc(drawTriangle);
glutMainLoop();
return 0;
}
