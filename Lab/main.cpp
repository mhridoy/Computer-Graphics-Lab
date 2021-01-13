
#include <windows.h>
#include <GL/glut.h>

void display(void){
/*
    // Create a Line
    glBegin(GL_LINES); // Line initialization

    // Colors on lines
    glColor3f(1,0,0);
    glVertex2f(0.5,0.5);
    // Node -> Vertex
    glVertex2f(-0.5,-0.5);

    // Green Color
    glColor3f(0,1,0);
    glVertex2f(-0.5,0.5);
    glVertex2f(0.5,-0.5);

     //
    glEnd(); // Line Connect End

    // Create Points
    //White Color
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2f(0,0.5);
    glEnd();
/*
    glColor3f(0,1,0);
    // Make a Triangles
    glBegin(GL_TRIANGLES);
    //Color

    glVertex2f(0,1);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glEnd();

    // Make a Quads
    glColor3f(0.4,0.6,0);
    glBegin(GL_QUADS);
    glVertex2f(-0.5,0);
    glVertex2f(0.5,0);

    glVertex2f(0.5,-1);
    glVertex2f(-0.5,-1);
    glEnd();
*/

    /// Make a Polygon
  /*  glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,0.7);
    glVertex2f(0.7,0.3);
    glVertex2f(0.7,-0.3);
    glVertex2f(0,-0.7);
    glVertex2f(-0.7,-0.3);
    glVertex2f(-0.7,0.3);
    glEnd(); */




    /// Task : Make a Star

        glColor3f(0,1,0);
    // Make a Triangles
    glBegin(GL_TRIANGLES);
    //Color

    glVertex2f(0.3,0.7);
    glVertex2f(0.3,0.4);
    glVertex2f(-0.3,0.4);
    glEnd();

        glColor3f(0,1,1);
    // Make a Triangles
    glBegin(GL_TRIANGLES);
    //Color

    glVertex2f(-0.6,0.4);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,0);
    glEnd();
    glColor3f(0.3,1,1);
    // Make a Triangles
    glBegin(GL_TRIANGLES);
    //Color

    glVertex2f(-0.6,-0.6);
    glVertex2f(-0.3,0);
    glVertex2f(0,-0.3);
    glEnd();
    glFlush(); //

    glColor3f(0,1,1);
    // Make a Triangles
    glBegin(GL_TRIANGLES);
    //Color

    glVertex2f(0.3,-0.5);
    glVertex2f(0,-0.3);
    glVertex2f(0.3,-0.1);
    glEnd();
glColor3f(0,1,1);
    // Make a Triangles
    glBegin(GL_TRIANGLES);
    //Color

    glVertex2f(0.6,0.4);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.3,0.4);
    glEnd();

}
int main(int argc, char ** argv){

    glutInit(&argc, argv); // Initialize glut pakagees
    glutInitDisplayMode(GLUT_SINGLE); // static graphic -> GLUT_SINGLE
    glutInitWindowSize(700,700); // Windows size
    glutInitWindowPosition(100,500); // Window position
    glutCreateWindow("Computer Graphics Lab"); // Window title
    glutDisplayFunc(display); // Call display Function
    glutMainLoop(); // Looping for - Stable Screen
    return 0;






}
