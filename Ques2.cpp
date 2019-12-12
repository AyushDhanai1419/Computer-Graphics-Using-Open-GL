//creating a polygon
#include "GL/freeglut.h"
#include "GL/gl.h"
void drawShape(){
glClearColor(0.3,0.4,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.0,1.0);
glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
glBegin(GL_POLYGON);
glVertex3f(-0.5,-0.5,0);
glVertex3f(0.5,-0.5,0);
glVertex3f(0.5,0.5,0);
glVertex3f(-0.5,0.5,0);
glEnd();
glFlush();
}
int main(int argc, char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(900,700);
glutInitWindowPosition(100,100);
glutCreateWindow("OpenGl - Creating a Polygon");
glutDisplayFunc(drawShape);
glutMainLoop();
return 0;
}
