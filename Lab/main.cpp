
#include <windows.h>
#include <GL/glut.h>

void display(void){

    // Create a Line
    glBegin(GL_LINES); // Line initialization
    glVertex2f(0.5,0.5); // Node -> Vertex
    glVertex2f(-0.5,-0.5); //
    glEnd(); // Line Connect End

    glFlush(); //


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
