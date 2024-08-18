#ifndef Material_H
#define Material_H

#include <glm/glm.hpp>
#include <learnopengl/shader_m.h>

class Material {
public:
	glm::vec3 ambient;
	glm::vec3 diffuse;
	glm::vec3 specular;
	float shininess;

	// Material constructor, taking floats of all lighting vectors + shininess as input
	Material(float ambR, float ambG, float ambB, float diffR, float diffG, float diffB, float specR, float specG, float specB, float shin = 32.0f) {
		ambient = glm::vec3(ambR, ambG, ambB);
		diffuse = glm::vec3(diffR, diffG, diffB);
		specular = glm::vec3(specR, specG, specB);
		shininess = shin;
	}

	// Update shader's material property with the material's components
	void setShader(Shader& shader) {
		shader.setVec3("material.ambient", ambient);
		shader.setVec3("material.diffuse", diffuse);
		shader.setVec3("material.specular", specular);
		shader.setFloat("material.shininess", shininess);
	}
};

#endif //!Material_H