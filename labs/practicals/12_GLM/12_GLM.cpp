#define GLM_ENABLE_EXPERIMENTAL
#include <glm\glm.hpp>
#include <glm\gtc\constants.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\quaternion.hpp>
#include <glm\gtx\euler_angles.hpp>
#include <glm\gtx\projection.hpp>
#include <iostream>

using namespace std;
using namespace glm;

int main() {

	//Declaring Different Vector Types
	vec2 u211(1,0);
	vec2 v212(0,1);
	vec3 u313(1,0,0);
	vec3 v314(0,1,0);
	vec4 v415(1,0,0,0);
	vec4 v416(0,1,0,0);

	//Vector Type Conversions
	vec2 u211(1, 0);
	vec2 v222(0, 1);
	vec3 u323(1, 0, 0);
	vec3 v324(0, 1, 0);
	vec4 v425(1, 0, 0, 0);
	vec4 v426(0, 1, 0, 0);

	//Adds a z component to a vec2
	vec3 u211(vec2(0,0),1);
	//Removes z component from vec3
	vec2 u32(vec3(0, 0, 0));
	//Adds a z and w component to a vec2
	vec4 u42(vec2(0, 0), 1,1);
	//Removes z and w component from a vec4
	vec2 v421(vec4(0, 0,0,0));

	//Accessing Individual Components
	//Set the access of u22's x component to float x
	float x = u211.x;
	//Set u22.y component to 10.0f, no variable declaration
	u211.y = 10.0f;

	//Vector addition/subtraction
	vec3 w = u323 + v324;

	//Vector Scaling
	//Up 
	vec3 v = 5.0f * u323;
	//Down
	vec3 w = u323 / 5.0f;

	//Vector Length
	float l = length(u323);

	//Normalise
	vec3 n = normalize(u323);

	//Dot product of two vectors
	float d = dot(u211, v222);
}