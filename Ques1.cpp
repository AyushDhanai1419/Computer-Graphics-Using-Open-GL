//code to draw a triangle
#include "GL/freeglut.h"
#include "GL/gl.h"
void drawTriangle(){
glClearColor(0.3,0.4,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.0,1.0);
glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex3f(0,1.0,0);
glVertex3f(0,-1,0);
glVertex3f(0.7,0.2,0);
glEnd();
glFlush();
}
int main(int argc, char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(900,700);
glutInitWindowPosition(100,100);
glutCreateWindow("OpenGl - Creating a Triangle");
glutDisplayFunc(drawTriangle);
glutMainLoop();
return 0;
}
