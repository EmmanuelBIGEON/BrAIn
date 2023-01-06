#pragma once

class AI;

class AuxiliaryProcessor
{
    public:
        AuxiliaryProcessor();
        virtual ~AuxiliaryProcessor();

		//! \brief Run the AuxiliaryProcessor in a separate thread.
        void Run();

        void SetAI(AI* ai) { m_ai = ai; }
    protected:
        AI* m_ai;
};
