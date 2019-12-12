//key press rotation
#include "GL/freeglut.h"
#include "GL/gl.h"
float _angle=0.0f;
void drawTriangle(){
glClearColor(0.3,0.4,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glRotatef(_angle,0.0,0.0,1.0);//constant value for self rotation
glColor3f(1.0,0.0,1.0);
glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
glBegin(GL_TRIANGLES);
glVertex3f(0,1.0,0);
glVertex3f(0,-1,0);
glVertex3f(0.7,0.2,0);
glEnd();
glFlush();
}
void keyPress(int key,int x,int y)
{
if(key==27)
exit(0);
if(key==GLUT_KEY_RIGHT)
_angle+=5;
if(key==GLUT_KEY_LEFT)
_angle-=5;
glutPostRedisplay();
}
int main(int argc, char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(900,700);
glutInitWindowPosition(100,100);
glutCreateWindow("OpenGl - Creating a Triangle");
glutDisplayFunc(drawTriangle);
glutSpecialFunc(keyPress);
glutMainLoop();
return 0;
}
