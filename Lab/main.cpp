
#include <windows.h>
#include <GL/glut.h>

void display(void){


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