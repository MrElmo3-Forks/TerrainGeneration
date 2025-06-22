#pragma once
#include <Game/Objects/Blocks/Block.h>

class Dirt : public Block {
public:
	Dirt(const std::string &_name,
		AObject* _parent = nullptr,
		ASceneController* _scene = nullptr
	);
};
