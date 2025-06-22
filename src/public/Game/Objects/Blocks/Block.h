#pragma once
#include <Core/Objects/AObject.h>
#include <Core/Objects/3D/Cube.h>

enum class BlockType{
	DIRT,
	WATER,
	SAND,
	GRASS,
	COBBLESTONE,
};

class Block : public Cube {
protected:
	BlockType blockType;

public:
	Block(const std::string &_name,
		AObject* _parent = nullptr,
		ASceneController* _scene = nullptr
	);

protected:
	void SetUV();
	
	BlockType GetBlockType() const { return blockType; }
};