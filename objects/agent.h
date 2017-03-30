#ifndef AGENT_H
#define AGENT_H

#include "actor.h"

class Agent : public Actor
{
public:
	Agent
	(
		Vector2 initPosition, Vector2 initSize, std::string spritePath, 
		double separationRadiusCoefficient, double neighbourhoodRadiusCoefficient, Vector2 initVelocity,
		double initMaxSpeed, double initMaxForce
	);
	~Agent();
	
	void HandleEvents(SDL_Event& event) override;
	void Update() override;
	void Render(SDL_Renderer* renderer) override;
	
	Vector2 GetVelocity();
	void SetVelocity(Vector2 newVelocity);
	
	double GetSeparationRadius();
	double GetNeighbourhoodRadius();
	const double GetMaxSpeed();
	const double GetMaxForce();
	
	Vector2 GetAcceleration();
	void AddAcceleration(Vector2 increase);
	
private:
	Vector2 velocity;
	Vector2 acceleration;
	
	const double separationRadius;
	const double neighbourhoodRadius;
	const double maxSpeed;
	const double maxForce;
	
	double angle;
};

#endif //AGENT_H