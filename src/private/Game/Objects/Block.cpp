#include <Game/Objects/Block.h>
#include <Core/Components/Render/RenderCubeComponent.h>
#include <Game/Systems/BlockSystem.h>
#include <Core/Materials/LitMaterial.h>

Block::Block(const std::string &_name, AObject* _parent, ASceneController* _scene) 
	: Cube(_name, _parent, _scene) {
	scale = glm::vec3(1);
	dynamic_cast<LitMaterial*>(renderComponent->material)
		->SetTexture("Assets/Textures/TextureAtlas.png");
	
};

void Block::SetUV() {
	renderComponent->uv = &BlockSystem::BlockUvMap[blockType];
}