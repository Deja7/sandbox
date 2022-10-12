#pragma once
#include "sbxV2D.h"
namespace sx
{
	class staticLine
	{
	public:
		sx::vec p1;									//coordinates
		sx::vec p2;
		sx::vec box;								//bounding box

		void getSfVertexArray();					//generate sfml drawable line


		sf::VertexArray line;						//creator
		staticLine(sx::vec start, sx::vec end);		//sfml drawable line
	};
}
