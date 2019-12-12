//creating line loop
#include "GL/freeglut.h"
#include "GL/gl.h"
float _angle=0.0f;
void drawShape(){
glClearColor(0.3,0.4,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glRotatef(15,0.0,0.0,1.0);
glColor3f(1.0,0.0,1.0);
glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
glBegin(GL_LINE_LOOP);
glVertex3f(0,0,0);
glVertex3f(0,1,0);
glVertex3f(1,1,0);
glVertex3f(0.5,0,0);
glVertex3f(0,0,0);
glEnd();
glFlush();
}
int main(int argc, char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(900,700);
glutInitWindowPosition(100,100);
glutCreateWindow("OpenGl - Creating a LineLoop");
glutDisplayFunc(drawShape);
glutMainLoop();
return 0;
}
