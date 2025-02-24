#pragma once
#include "Vertex.h"

enum class Topology {
	Point,
    Line,
    Triangle

};

class PrimitivesManager {
public:

	static PrimitivesManager* Get();

	bool BeginDraw(Topology topology);
	void AddVertex(const Vertex& vertex);
	bool EndDraw();
private:

	PrimitivesManager();

	std::vector<Vertex>mVertexBuffer;
	Topology mTopology = Topology::Point;
	bool mDrawBegin = false;
};