#ifndef GLOW_H_INCLUDED
#define GLOW_H_INCLUDED

#include "SEGlobals.h"
#include "SEGame.h"
#include "SEGameObject.h"

class Glow : public SEGameObject
{
public :
	Glow(SEGameObject* parent, sf::Color color);
	Glow(SEGameObject* parent, sf::Color color, int glow_thickness, int stroke_size = 0);
	Glow(SEGameObject* parent, sf::Color color, int glow_thickness, int stroke_size, float glow_animation_duration, int glow_min_thickness);

	static sf::Uint8* CreateGlowFrame(SEGameObject* parent, sf::Color color, int glow_thickness, int stroke_size = 0);
	virtual ~Glow();
	void update(sf::Time deltaTime) override;

	sf::Color m_color;
	Uint8 m_glow_radius;
	sf::Clock m_glow_variation_clock;
	float m_glow_animation_duration;
};

#endif // GLOW_H_INCLUDED
