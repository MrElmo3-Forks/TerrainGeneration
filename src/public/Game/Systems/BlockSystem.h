#pragma once
#include <Util/Singleton.h>
#include <unordered_map>
#include <vector>
#include <glm/glm.hpp>

enum class BlockType;

class BlockSystem {
public:
	static float TileSize;
	static std::unordered_map<BlockType, std::vector<glm::vec2>> BlockUvMap;
};