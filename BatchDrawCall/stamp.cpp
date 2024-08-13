//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//
//#include <iostream>
//#include <vector>
//
//// 顶点结构体
//struct Vertex {
//    GLfloat position[3];
//    GLfloat color[3];
//};
//
//// 初始化GLFW
//void initGLFW() {
//    if (!glfwInit()) {
//        std::cerr << "Failed to initialize GLFW" << std::endl;
//        exit(EXIT_FAILURE);
//    }
//
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//}
//
//// 创建VBO和IBO

//
//// 创建VAO
//GLuint createVAO(GLuint vbo) {
//    GLuint vao;
//    glGenVertexArrays(1, &vao);
//    glBindVertexArray(vao);
//
//    glBindBuffer(GL_ARRAY_BUFFER, vbo);
//    glEnableVertexAttribArray(0);
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)0);
//    glEnableVertexAttribArray(1);
//    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, color));
//
//    glBindBuffer(GL_ARRAY_BUFFER, 0);
//    glBindVertexArray(0);
//
//    return vao;
//}
//
//int main() {
//    // 初始化GLFW和创建窗口
//    initGLFW();
//    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Static Batching", NULL, NULL);
//    if (!window) {
//        std::cerr << "Failed to create GLFW window" << std::endl;
//        glfwTerminate();
//        exit(EXIT_FAILURE);
//    }
//    glfwMakeContextCurrent(window);
//
//    // 初始化GLAD
//    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
//        std::cerr << "Failed to initialize GLAD" << std::endl;
//        exit(EXIT_FAILURE);
//    }
//
//    int versionMajor = 4;
//    int versionMinor = 6;
//    glGetIntegerv(GL_MAJOR_VERSION, &versionMajor);
//    glGetIntegerv(GL_MINOR_VERSION, &versionMinor);
//    if (versionMajor < 3 || (versionMajor == 3 && versionMinor < 3)) {
//        std::cerr << "OpenGL 3.3 or higher is required" << std::endl;
//        glfwTerminate();
//        exit(EXIT_FAILURE);
//    }
//
//    // 创建顶点和索引数据
//    std::vector<Vertex> vertices;
//    std::vector<GLuint> indices;
//    // 填充vertices和indices数据...
//
//    // 创建VBO, IBO和VAO
//    GLuint ibo = createVBOAndIBO(vertices, indices);
//    GLuint vao = createVAO(ibo);
//
//    // 渲染循环
//    while (!glfwWindowShouldClose(window)) {
//        // 渲染前的准备工作...
//
//        // 清屏
//        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//        // 绑定VAO并绘制
//        glBindVertexArray(vao);
//        glDrawElements(GL_TRIANGLES, static_cast<GLsizei>(indices.size()), GL_UNSIGNED_INT, 0);
//
//        // 渲染后的清理工作...
//
//        // 交换前后缓冲
//        glfwSwapBuffers(window);
//
//        // 检查事件
//        glfwPollEvents();
//    }
//
//    // 清理资源
//    glDeleteVertexArrays(1, &vao);
//    glDeleteBuffers(1, &ibo);
//    glfwTerminate();
//
//    return 0;
//}
