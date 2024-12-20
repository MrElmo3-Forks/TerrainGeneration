#pragma once
#include <string>
#include <glm/glm.hpp>

#include "Core/Components/IComponent.h"
#include "Util/Graph.h"	

class MazeGeneratorComponent : public IComponent {
private:
	Graph mazeGraph;
	int size;
	long seed;
	int startID;
	int endID;

public:
	MazeGeneratorComponent(AObject* parent);
	~MazeGeneratorComponent() override;
	void Awake() override;

private:
	void GenerateMaze();
	void GenerateObjects();
	void PrintMaze();

	void InstantiateWall(std::string id, glm::vec3 objectPosition, glm::vec3 objectSize);

public:
	int GetSize() const { return size; }
	void SetSize(int size) { this->size = size; }
	long GetSeed() const { return seed; }
	void SetSeed(long seed) { this->seed = seed; }
};