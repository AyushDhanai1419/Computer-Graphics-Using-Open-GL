//self rotating polygon
#include "GL/freeglut.h"
#include "GL/gl.h"
float _angle=0.0f;
void drawShape(){
glClearColor(0.3,0.4,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
glRotatef(_angle,0.0,0.0,1.0);//constant value for self rotation
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
void update(int value) {
_angle += 2.0f;
if (_angle > 360) {
_angle -= 360;
}
glutPostRedisplay(); //Tell GLUT that the display has changed
//Tell GLUT to call update again in 150 milliseconds
glutTimerFunc(150, update, 0);
} int main(int argc, char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(900,700);
glutInitWindowPosition(100,100);
glutCreateWindow("OpenGl - Creating a Triangle");
glutDisplayFunc(drawShape);
glutTimerFunc(50, update, 0);//self rotation
glutMainLoop();
return 0;
}
