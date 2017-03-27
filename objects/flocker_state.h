#ifndef FLOCKER_STATE_H
#define FLOCKER_STATE_H

#include "state.h"
#include <vector>
#include "agent.h"

class FlockerState : public State
{
public:
	FlockerState();
	void Update() override;
	void HandleEvents(SDL_Event& event) override;
	void Render(SDL_Renderer* renderer) override;
	
	const std::vector<Agent>& GetAgents();
private:
	std::vector<Agent> agents;
};


#endif //FLOCKER_STATE_H