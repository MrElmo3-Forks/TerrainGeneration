#include <Game/Systems/BlockSystem.h>
#include <Game/Objects/Block.h>

float BlockSystem::TileSize = 1.0f/3.0f;

std::unordered_map<BlockType, std::vector<glm::vec2>> BlockSystem::BlockUvMap = {
	{ BlockType::DIRT, {
		//right
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},
		
		//left
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},

		//top
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},

		//down
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},

		//front
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},

		//back
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},
	}},

	{ BlockType::WATER, {
		{0 * TileSize,	1 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{0 * TileSize,	2 * TileSize},

		{0 * TileSize,	1 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{0 * TileSize,	2 * TileSize},

		{0 * TileSize,	1 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{0 * TileSize,	2 * TileSize},

		{0 * TileSize,	1 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{0 * TileSize,	2 * TileSize},

		{0 * TileSize,	1 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{0 * TileSize,	2 * TileSize},

		{0 * TileSize,	1 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{0 * TileSize,	2 * TileSize},
	}},

	{ BlockType::SAND, {
		{0 * TileSize,	0 * TileSize},
		{1 * TileSize,	0 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{0 * TileSize,	1 * TileSize},

		{0 * TileSize,	0 * TileSize},
		{1 * TileSize,	0 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{0 * TileSize,	1 * TileSize},

		{0 * TileSize,	0 * TileSize},
		{1 * TileSize,	0 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{0 * TileSize,	1 * TileSize},

		{0 * TileSize,	0 * TileSize},
		{1 * TileSize,	0 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{0 * TileSize,	1 * TileSize},

		{0 * TileSize,	0 * TileSize},
		{1 * TileSize,	0 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{0 * TileSize,	1 * TileSize},

		{0 * TileSize,	0 * TileSize},
		{1 * TileSize,	0 * TileSize},
		{1 * TileSize,	1 * TileSize},
		{0 * TileSize,	1 * TileSize},
	}},
	
	{ BlockType::GRASS, {
		//right
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},
		
		//left
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},

		//top
		{1 * TileSize,	2 * TileSize},
		{2 * TileSize,	2 * TileSize},
		{2 * TileSize,	3 * TileSize},
		{1 * TileSize,	3 * TileSize},

		//down
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},

		//front
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},

		//back
		{0 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
		{1 * TileSize,	3 * TileSize},
		{0 * TileSize,	3 * TileSize},
	}},

	{ BlockType::COBBLESTONE, {
		{1 * TileSize,	1 * TileSize},
		{2 * TileSize,	1 * TileSize},
		{2 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},

		{1 * TileSize,	1 * TileSize},
		{2 * TileSize,	1 * TileSize},
		{2 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},

		{1 * TileSize,	1 * TileSize},
		{2 * TileSize,	1 * TileSize},
		{2 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},

		{1 * TileSize,	1 * TileSize},
		{2 * TileSize,	1 * TileSize},
		{2 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},

		{1 * TileSize,	1 * TileSize},
		{2 * TileSize,	1 * TileSize},
		{2 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},

		{1 * TileSize,	1 * TileSize},
		{2 * TileSize,	1 * TileSize},
		{2 * TileSize,	2 * TileSize},
		{1 * TileSize,	2 * TileSize},
	}},
};