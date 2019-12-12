//self rotating cube
#include "GL/freeglut.h"
#include "GL/gl.h"
float _angle=0.0f;
void drawTriangle(){
glClearColor(0.3,0.4,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glRotatef(15,0.1,0.0,1.0);
//glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
glBegin(GL_POLYGON);
glColor3f( 1.0, 0.0, 0.0 ); glVertex3f( 0.5, -0.5, -0.5 ); // P1 is red
glColor3f( 0.0, 1.0, 0.0 ); glVertex3f( 0.5, 0.5, -0.5 ); // P2 is green
glColor3f( 0.0, 0.0, 1.0 ); glVertex3f( -0.5, 0.5, -0.5 ); // P3 is blue
glColor3f( 1.0, 0.0, 1.0 ); glVertex3f( -0.5, -0.5, -0.5 ); // P4 is purple
glEnd();
// White side - BACK
glBegin(GL_POLYGON);
glColor3f( 1.0, 1.0, 1.0 );
glVertex3f( 0.5, -0.5, 0.5 );
glVertex3f( 0.5, 0.5, 0.5 );
glVertex3f( -0.5, 0.5, 0.5 );
glVertex3f( -0.5, -0.5, 0.5 );
glEnd();
// Purple side - RIGHT
glBegin(GL_POLYGON);
glColor3f( 1.0, 0.0, 1.0 );
glVertex3f( 0.5, -0.5, -0.5 );
glVertex3f( 0.5, 0.5, -0.5 );
glVertex3f( 0.5, 0.5, 0.5 );
glVertex3f( 0.5, -0.5, 0.5 );
glEnd();
// Green side - LEFT
glBegin(GL_POLYGON);
glColor3f( 0.0, 1.0, 0.0 );
glVertex3f( -0.5, -0.5, 0.5 );
glVertex3f( -0.5, 0.5, 0.5 );
glVertex3f( -0.5, 0.5, -0.5 );
glVertex3f( -0.5, -0.5, -0.5 );
glEnd();
// Blue side - TOP
glBegin(GL_POLYGON);
glColor3f( 0.0, 0.0, 1.0 );
glVertex3f( 0.5, 0.5, 0.5 );
glVertex3f( 0.5, 0.5, -0.5 );
glVertex3f( -0.5, 0.5, -0.5 );
glVertex3f( -0.5, 0.5, 0.5 );
glEnd();
// Red side - BOTTOM
glBegin(GL_POLYGON);
glColor3f( 1.0, 0.0, 0.0 );
glVertex3f( 0.5, -0.5, -0.5 );
glVertex3f( 0.5, -0.5, 0.5 );
glVertex3f( -0.5, -0.5, 0.5 );
glVertex3f( -0.5, -0.5, -0.5 );
glEnd();
glFlush();
glutSwapBuffers();
}
void update(int value) {
_angle += 2.0f;
/* if (_angle > 360) {
_angle -= 360;
}*/
glutPostRedisplay(); //Tell GLUT that the display has changed
//Tell GLUT to call update again in 150 milliseconds
glutTimerFunc(300, update, 0);
} int main(int argc, char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(900,700);
glutInitWindowPosition(100,100);
glutCreateWindow("OpenGl - Creating a Triangle");
glEnable(GL_DEPTH_TEST);
glutDisplayFunc(drawTriangle);
glutTimerFunc(50, update, 0);
glutMainLoop();
return 0;
}
