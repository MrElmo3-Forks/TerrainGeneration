#pragma once
#include <glm/glm.hpp>
#include "ColliderComponent.h"

class SquareColliderComponent : public ColliderComponent{
public:
	glm::vec2 center;
	glm::vec2 halfSize;

private:
	glm::vec2 worldCenter;
	glm::vec2 worldHalfSize;

public:

	SquareColliderComponent(AObject* parent);
	SquareColliderComponent(AObject* parent, glm::vec2 center, glm::vec2 halfSize);
	~SquareColliderComponent() override;

	void FixedUpdate() override;
	void Update(double deltatime) override;
	void LateUpdate() override;

	glm::vec2 GetWorldCenter() const { return worldCenter; }
	glm::vec2 GetWorldHalfSize() const { return worldHalfSize; }
};
