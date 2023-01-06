#include "AI.h"

#include <thread>

#include "../util/console.h"

AI::AI(const std::string& aCuteName) : m_aCuteName(aCuteName), m_isRunning(false)
{
}

AI::~AI()
{
}

void AI::Run()
{
	if(m_isRunning) return;
	m_isRunning = true;

	// start MainProcessing..
	std::thread AIThread([this]() {
		while (true)
		{
			// Temporize the thread to avoid a busy loop.
			// No need to be efficient yet.
			std::this_thread::sleep_for(std::chrono::milliseconds(100));
			console("Hello world!\n");
			if(!Think())
			{
				console("I'm a zombie!\n");
			}
		}
	});
	AIThread.detach();

	// start Perception..
	// start Auxiliary prcesses..
	// start Memory..
	// Initiate the AI.
}

bool AI::Think()
{
	// do nothing.
}