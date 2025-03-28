#pragma once
#include <Core/Objects/AObject.h>

class RenderQuadComponent;
class SquareColliderComponent;

class Square : public AObject {
public:
	Square(const std::string &_name, AObject* _parent = nullptr, ASceneController* _scene = nullptr);

private:
	RenderQuadComponent* renderComponent;
	SquareColliderComponent* colliderComponent;

public:
	[[nodiscard]] RenderQuadComponent* GetRenderComponent() const { return renderComponent; }
	[[nodiscard]] SquareColliderComponent* GetColliderComponent() const { return colliderComponent; }
};
