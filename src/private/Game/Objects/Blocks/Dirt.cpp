#include <Game/Objects/Blocks/Dirt.h>

Dirt::Dirt(const std::string &_name, AObject* _parent, ASceneController* _scene) 
	: Block(_name, _parent, _scene) {

	blockType = BlockType::GRASS;
	SetUV();
};