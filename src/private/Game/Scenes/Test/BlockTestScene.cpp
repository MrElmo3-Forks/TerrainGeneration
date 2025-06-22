#include <Game/Scenes/Test/BlockTestScene.h>
#include <Game/Objects/Player.h>
#include <Game/Objects/Blocks/Dirt.h>
#include <Core/Objects/Light/PointLight.h>

BlockTestScene::BlockTestScene() {
	auto* lightSource = new PointLight("light", nullptr, this);
	new Dirt("Dirt", nullptr, this);
	new Player("Player", nullptr, this);
}