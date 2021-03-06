#ifndef IMAGHE_H
#define IMAGE_H
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm.hpp>
#include <gtc/type_ptr.hpp>
#include <gtc/matrix_transform.hpp>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <string>

GLuint TextureFromFile(const char* path, const std::string& directory);
GLuint TextureFromFile(std::string path);
GLuint TextureFromFileClamp(const char* path, const std::string& directory);


#endif

