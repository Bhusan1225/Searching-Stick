#include "Gameplay/GameplayService.h"
#include "Gameplay/GameplayController.h"
#include "Global/ServiceLocator.h"


namespace Gameplay
{
	using namespace Global;
	GameplayService::GameplayService()
	{
		gameplay_controller = new GameplayController();
	}

	GameplayService::~GameplayService()
	{
		delete (gameplay_controller);
	}

	void GameplayService::initialize()
	{
		gameplay_controller->initialize();
	}

	void GameplayService::update()
	{
		gameplay_controller->update();
	}

	void GameplayService::render()
	{
		gameplay_controller->render();
	}

	void GameplayService::reset()
	{
		gameplay_controller->reset();
	}

	void GameplayService::searchElement(/*Collection::SearchType search_type*/)
	{
		//collection_controller->searchElement(search_type);
	}
}