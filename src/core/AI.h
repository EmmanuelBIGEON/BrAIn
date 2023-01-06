#pragma once 

#include <string>

//! \class AI
//! \brief Core class of this repository, it is the basis on which the AI is built.
class AI
{
	public:
		AI(const std::string& aCuteName);
		virtual ~AI();

		//! \brief Run the AI in a separate thread which can be fed events to interact with.
		void Run();

		//! \brief Main method of the AI, it is called at each tick.
		//! \return false if the AI is not able to think, goes to a zombie state ? Maybe an Enum like ThinkingState_Interrupted, ThinkingState_Zombie, ..
		bool Think();

		std::string GetName() const { return m_aCuteName; }

	protected:
		std::string m_aCuteName;
		bool m_isRunning;
};
