#include <GLFW/glfw3.h>
#include <iostream>

int main() {
    if (!glfwInit()) {
        std::cerr << "Generating GLFW\n";
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(
        800, 600,
        "Mi triangulo",
        nullptr,
        nullptr
    );

    if (!window) {
        std::cerr << "Error making the window\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

	camera = (0,3,0);

        glBegin(GL_TRIANGLES); 

	glVertex3f( 0.0f,  0.5f, 0.0f);
	glVertex3f(-0.5f, -0.5f, 0.0f);
	glVertex3f( 0.5f, -0.5f, 0.0f);
        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
