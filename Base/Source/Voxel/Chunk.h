#ifndef Chunk_H
#define Chunk_H

#include "Mesh.h"

/***************************************************************************************************************
Chunk class:
-Renders 256*64*64 blocks

Author: Tan Yie Cher
Date: 6/3/2018
/***************************************************************************************************************/
class Chunk : public Mesh
{
	//data--------------------------------------//
	int data[256][64][64];	//change to hex value

public:

	//CD----------------------------------------//
	Chunk();
	~Chunk();

	void UpdateChunk();

	//Core--------------------------------------//
	void Draw();
};

#endif