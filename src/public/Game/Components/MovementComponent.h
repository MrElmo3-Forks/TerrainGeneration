#pragma once
#include <glm/glm.hpp>

#include "Core/Components/IComponent.h"


class Rigidbody3DComponent;

class MovementComponent : public IComponent {
private:
	glm::vec2 direction;
	glm::vec2 rotation;
	
	float speed;
	float rotationSpeed;

	Rigidbody3DComponent* rb;
	
public:
	MovementComponent(AObject* parent);
	~MovementComponent() override;

	void Start() override;
	void Update(double deltaTime) override;
	void FixedUpdate() override;

	void SetSpeed(float speed);
	void SetRotationSpeed(float rotationSpeed);
	void SetDirection(glm::vec2 direction);
	void SetRotation(glm::vec2 rotation);

	glm::vec2 GetDirection()	const { return direction; }
	glm::vec2 GetRotation()			const { return rotation; }
	double GetSpeed()			const { return speed; }
	double GetRotationSpeed()	const { return rotationSpeed; }
};
