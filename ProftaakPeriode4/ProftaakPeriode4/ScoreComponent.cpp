#include "ScoreComponent.h"

ScoreComponent::ScoreComponent() : Component(SCORE_COMPONENT)
{
    _score = 0;
    _name = "Gijs";
}

ScoreComponent::~ScoreComponent()
{
}

void ScoreComponent::changeScore(int difScore)
{
    int score = _score + difScore;    
    if (score <= 0)
    {
        _score = 0;
        return;
    }
    _score += difScore;
}

void ScoreComponent::changeName(std::string name)
{
    _name = name;
}

std::string ScoreComponent::returnName()
{
    return _name;
}

unsigned int ScoreComponent::returnScore()
{
    return _score;
}

void ScoreComponent::LateUpdate(float deltaTime)
{
    
}

void ScoreComponent::Update(float deltaTime)
{
    changeScore(1);
}



